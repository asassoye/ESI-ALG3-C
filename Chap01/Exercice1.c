/**
 * @file Exercice1.c
 * @author Andrew SASSOYE
 */

#include <stdlib.h>
#include <stdbool.h>
#include "Exercice1.h"

void addElement(LinkedList* list, void* value) {
    linked_list_add(list, node_new(value));
}

Node* searchValInList(LinkedList* list, void* value) {
    Node* actual = linked_list_get_head(list);

    while (actual != NULL) {
        if (node_get_data(actual) == value) {
            return actual;
        }
        actual = node_get_next(actual);
    }

    return NULL;
}

bool containsValue(LinkedList* list, void* value) {
    Node* node = searchValInList(list, value);

    if (node) {
        return true;
    }

    return false;
}

bool removeElementByValue(LinkedList* list, void* value) {
    Node* prev = NULL;
    Node* actual = linked_list_get_head(list);

    while (actual != NULL) {
        if (node_get_data(actual) == value) {
            if (prev) {
                node_set_next(prev, node_get_next(actual));
            } else {
                linked_list_set_head(list, node_get_next(actual));
            }
            node_free(actual);
            return true;
        }
        prev = actual;
        actual = node_get_next(actual);
    }

    return false;
}

int removeAllElementsByValue(LinkedList* list, void* value) {
    Node* prev = NULL;
    Node* actual = linked_list_get_head(list);
    int nb = 0;

    while (actual != NULL) {
        if (node_get_data(actual) == value) {
            if (prev) {
                node_set_next(prev, node_get_next(actual));
            } else {
                linked_list_set_head(list, node_get_next(actual));
            }
            node_free(actual);
            nb++;
        }
        prev = actual;
        actual = node_get_next(actual);
    }

    return nb;
}
