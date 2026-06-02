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

int main(void) {
    struct node *list = NULL;

    /* Build the list: 3 → 1 → 2 → 3 → 4 → 3 */
    list = push_front(list, 3);
    list = push_front(list, 4);
    list = push_front(list, 3);
    list = push_front(list, 2);
    list = push_front(list, 1);
    list = push_front(list, 3);

    int target = 3;
    int result = count_occurrences(list, target);

    printf("The value %d appears %d times in the list.\n", target, result);

    return 0;
}