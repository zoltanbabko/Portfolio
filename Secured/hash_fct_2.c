/*
** EPITECH PROJECT, 2024
** secured
** File description:
** secured
*/

#include "hashtable.h"
#include <stddef.h>

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index = ht->hash(key, strlen(key)) % ht->size;
    item_t *new_entry = (item_t *)malloc(sizeof(item_t));
    if (new_entry == NULL) 
        return 0;
    new_entry->key = strdup(key);
    new_entry->value = strdup(value);
    new_entry->next = ht->table[index];
    ht->table[index] = new_entry;
    return 1;
}

int ht_delete(hashtable_t *ht, char *key)
 {
    int index = ht->hash(key, strlen(key)) % ht->size;
    item_t *current = ht->table[index];
    item_t *prev = NULL;

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            if (prev == NULL) {
                ht->table[index] = current->next;
            } else {
                prev->next = current->next;
            }
            free(current->key);
            free(current->value);
            free(current);
            return 1;
        }
        prev = current;
        current = current->next;
    }
    return 0;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int index = ht->hash(key, strlen(key)) % ht->size;
    item_t *current = ht->table[index];

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}

void ht_dump(hashtable_t *ht)
{
    for (int i = 0; i < ht->size; i++) {
        item_t *current = ht->table[i];
        printf("[%d]: ", i);
        while (current != NULL) {
            printf("(%s, %s) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL\n");
    }
}