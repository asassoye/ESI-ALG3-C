/**
 * @file LinkedList.c
 * @author Andrew SASSOYE
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "LinkedList.h"

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    struct Node* head;
} LinkedList;

Node* node_new(void* data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    return node;
}

void node_free(Node* node) {
    if(node != NULL) {
        free(node);
        node = NULL;
    }
}

void* node_get_data(Node* node) {
    if (node != NULL) {
        return node->data;
    }
    return NULL;
}

Node* node_set_data(Node* node, void* data) {
    assert(node != NULL);

    node->data = data;
    return node;
}

Node* node_get_next(Node* node) {
    assert(node != NULL);

    return node->next;
}

void node_set_next(Node* node, Node* next) {
    assert(node != NULL);

    node->next = next;
}

LinkedList* linked_list_new(){
    LinkedList* list = malloc(sizeof(LinkedList));
    list->head = NULL;

    return list;
}

void linked_list_free(LinkedList* list) {
    Node* actual = list->head;
    Node* next = NULL;
    while (actual != NULL) {
        next = actual->next;
        node_free(actual);
        actual = next;
    }

    free(list);
}

LinkedList* linked_list_add(LinkedList* list, Node* node){
    assert(list != NULL);
    assert(node != NULL);

    node->next = list->head;
    list->head = node;

    return list;
}

Node* linked_list_get_head(LinkedList* list) {
    assert(list != NULL);

    return list->head;
}

void linked_list_set_head(LinkedList* list, Node* node) {
    assert(list != NULL);

    list->head = node;
}