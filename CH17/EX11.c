#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int count_occurrences(struct node *list, int n) {
    int count = 0;

    while (list != NULL) {
        if (list->data == n) {
            count++;
        }
        list = list->next;
    }

    return count;
}

struct node* push_front(struct node *head, int value) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = head;
    return new_node;
}

void append_node(struct node *head, int value) {

    struct node *current = head;
    while (current->next != NULL){
        current = current->next;
    }
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;
    current->next = new_node;
}

int main(void) {
    struct node *list = NULL;

    /* Build the list: 3 -> 1 -> 2 -> 3 -> 4 -> 3 */
    list = push_front(list, 3);
    list = push_front(list, 4);
    list = push_front(list, 3);
    list = push_front(list, 2);
    list = push_front(list, 1);
    list = push_front(list, 3);

    int target = 3;
    int result = count_occurrences(list, target);

    printf("The value %d appears %d times in the list.\n", target, result);


    /* Build the list: 0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 3  */
    struct node *list_append = malloc(sizeof(struct node));
    list_append->data = 0;
    list_append->next = NULL;
    
    append_node(list_append, 1);
    append_node(list_append, 2);
    append_node(list_append, 3);
    append_node(list_append, 4);
    append_node(list_append, 5);
    append_node(list_append, 3);
    

    int result_append = count_occurrences(list_append, target);
    printf("The value %d appears %d times in the list.\n", target, result_append);

    return 0;
}