/*
** EPITECH PROJECT, 2024
** secured
** File description:
** secured
*/

#include "hashtable.h"
#include <stddef.h>

int hash(char *key, int len)
{
    int hashval = 0;

    if (key == NULL || strlen(key) == 0 && len == 0)
        return 0;
    for (int i = 0; i < len; i++) {
        hashval += key[i];
    }
    return hashval;
}

hashtable_t *new_hashtable(int (*hash_func)(char *, int), int len) 
{
    hashtable_t *ht = (hashtable_t *)malloc(sizeof(hashtable_t));

    ht->table = (item_t **)malloc(sizeof(item_t *) * len);
    for (int i = 0; i < len; i++) {
        ht->table[i] = NULL;
    }
    ht->hash = hash_func;
    ht->size = len;
    return ht;
}

void delete_hashtable(hashtable_t *ht)
{
    if (ht == NULL)
        return;
    for (int i = 0; i < ht->size; i++) {
        item_t *current = ht->table[i];
        while (current != NULL) {
            item_t *temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    free(ht->table);
    free(ht);
}
