#ifndef q_h
#define q_h


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// Define the q-element struct
typedef struct q_element {
    struct q_element* next;
    struct q_element* prev;
    int data;
} q_element;





// returns a pointer to a new q-element
q_element * NewItem() {
    q_element * new_item = malloc(sizeof(q_element));
    new_item->next = new_item->prev = NULL;
    return new_item;
}

// creates a empty queue, pointed to by the variable head
void InitQueue(q_element *head) {
    head = NULL;
    return;
}

// adds a queue item, pointed to by “item”, to the queue pointed to by head.
void AddQueue(q_element *head,  q_element item) {
    // Create a new item
    /*item *prev = NULL;
    while(*head) {
        prev = *head;
        head = &prev->next;
    }

    *head = NewItem();
    (*head)->prev = prev;*/
}

// deletes an item from head and returns a pointer to the deleted item
q_element * DelQueue(q_element *head) {
    // Find first item in the queue
    q_element *tmp = head;
    /*
    // Check for an empty queue
    if(head != NULL) {
        // Check for single or multi elements in queue
        if (head->header->next != NULL) {
            // Get the last element and next element
            // Assign next and prev to recreate chain
            head->header->prev->next = head->header->next;
            head->header->next->prev = head->header->prev;

            // Set the queue header to next
            head->header = head->header->next;
        } else {
            // Remove element from queue
            head->header = NULL;
        }
    }
    */
    return tmp;
}

#endif