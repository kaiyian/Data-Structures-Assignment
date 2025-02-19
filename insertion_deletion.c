#include <stdio.h>
#define MAX 100

int arr[MAX];
int size = 0;

// Function to insert an element at a given position
void insert(int element, int position) {
    if (size >= MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    printf("Element %d inserted at position %d.\n", element, position);
}

// Function to delete an element at a given position
void delete(int position) {
    if (size == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (position < 0 || position >= size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Element at position %d deleted.\n", position);
}

// Function to display the array
void display() {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    insert(10, 0);
    insert(20, 1);
    insert(30, 2);
    display();
    delete(1);
    display();
    return 0;
}

