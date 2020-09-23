How to use example

```c
void brol() {
    LinkedList* list = linked_list_new();

    int value, value2;
    value = 10;
    value2 = 20;

    linked_list_add(list, node_new(&value));
    linked_list_add(list, node_new(&value2));
    
    // EX1
    addElement(list, &value);
    int rm = removeAllElementsByValue(list, &value2);
    printf("Suppression de %d elements\n", rm);
    
    bool contain = containsValue(list, &value);
    if (contain) {
        printf("%d est présent dans la liste\n", value);
    } else {
        printf("%d n'est pas présent dans la liste\n", value);
    }

    linked_list_free(list);
}
```
