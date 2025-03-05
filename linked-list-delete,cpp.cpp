#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node by value
void delete_value(struct Node** head, int value) {
    struct Node* ptr = *head;
    struct Node* prev = NULL;    

    // If list is empty
    if (ptr == NULL) {
        printf("List is empty\n");
        return;
    }

    // If head node itself holds the value to be deleted
    if (ptr->data == value) {
        *head = ptr->next;
        free(ptr);
        return;
    }

    // Search for the node to be deleted
    while (ptr != NULL && ptr->data != value) {
        prev = ptr;
        ptr = ptr->next;
    }

    // If value was not found
    if (ptr == NULL) {
        printf("Value not found in the list\n");
        return;
    }

    // Unlink the node from the linked list
    prev->next = ptr->next;
    free(ptr);
}
