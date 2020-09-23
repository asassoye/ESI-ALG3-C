/**
 * @file LinkedList.h
 * @author Andrew SASSOYE
 */
#ifndef ALGO_LINKEDLIST_H
#define ALGO_LINKEDLIST_H

typedef struct Node Node;
typedef struct LinkedList LinkedList;

/**
 * Create a Node in memory with given data and returns pointer
 *
 * @param data Pointer to data to set in Node
 * @return Pointer to newly created Node
 */
Node* node_new(void* data);

/**
 * Free memory of Node but not data in it
 *
 * @param node Node to free
 */
void node_free(Node* node);

/**
 * Returns pointer to data of given Node
 *
 * @param node Node to return data
 * @return Pointer to data
 */
void* node_get_data(Node* node);

/**
 * Setter of data
 *
 * @param node Node to set data
 * @param data Pointer to new data
 * @return Modified Node
 */
Node* node_set_data(Node* node, void* data);

/**
 * Get next Node of a given Node
 * @param node Actual Node
 * @return next Node
 */
Node* node_get_next(Node* node);

/**
 * Set next Node of given Node
 * @param node Actual node
 * @param next Next node to set in Actual Node
 */
void node_set_next(Node* node, Node* next);

/**
 * Create a new empty LinkedList in memory
 *
 * @return pointer to newly created LinkedList
 */
LinkedList* linked_list_new();

/**
 * Free a linked list in memory and all nodes
 *
 * @param list LinkedList to free
 */
void linked_list_free(LinkedList* list);

/**
 * Add an element in the beginning of a LinkedList
 *
 * @param list LinkedList to add element in
 * @param node Node to add
 * @return LinkedList
 */
LinkedList* linked_list_add(LinkedList* list, Node* node);

/**
 * Get head Node of a LinkedList
 *
 * @param list LinkedList to use to return head
 * @return Node in head of given LinkedList
 */
Node* linked_list_get_head(LinkedList* list);

/**
 * Set head Node of a LinkedList
 *
 * @param list LinkedList to modify
 * @param node Node to set as head
 * @return Node
 */
void linked_list_set_head(LinkedList* list, Node* node);

#endif //ALGO_LINKEDLIST_H
