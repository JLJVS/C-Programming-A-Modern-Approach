#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    
    // first check if the new_node would be at the head i.e. smaller than the starting value
    if (list == NULL || new_node-> value <= list-> value){
        new_node->next = list;
        return new_node;
    }

    // create two pointers one a copy of the head of the list and a previous pointer
    struct node *cur = list;

    // short circuit the if check like this to not get garbage values
    while (cur->next != NULL && cur->next->value < new_node->value) {
        cur = cur->next;
    }

    // we are now at the insertion point
    new_node->next = cur->next;
    cur->next = new_node;
    
    return list;
}

void print_list(struct node *list) {
    while (list != NULL) {
        printf("%d ", list->value);
        list = list->next;
    }
    printf("\n");
}

int main(void) {

    /* -------------------------------------------------- */
    /* Example 1: Insert values in increasing order        */
    /* -------------------------------------------------- */
    struct node *list1 = NULL;

    int values1[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        struct node *n = malloc(sizeof(struct node));
        n->value = values1[i];
        n->next = NULL;
        list1 = insert_into_ordered_list(list1, n);
    }

    printf("Example 1 (already sorted inserts): ");
    print_list(list1);


    /* -------------------------------------------------- */
    /* Example 2: Insert values in random order            */
    /* -------------------------------------------------- */
    struct node *list2 = NULL;

    int values2[] = {7, 3, 9, 1, 5};
    for (int i = 0; i < 5; i++) {
        struct node *n = malloc(sizeof(struct node));
        n->value = values2[i];
        n->next = NULL;
        list2 = insert_into_ordered_list(list2, n);
    }

    printf("Example 2 (random inserts): ");
    print_list(list2);


    /* -------------------------------------------------- */
    /* Example 3: Insert duplicates                        */
    /* -------------------------------------------------- */
    struct node *list3 = NULL;

    int values3[] = {4, 4, 2, 4, 1, 2};
    for (int i = 0; i < 6; i++) {
        struct node *n = malloc(sizeof(struct node));
        n->value = values3[i];
        n->next = NULL;
        list3 = insert_into_ordered_list(list3, n);
    }

    printf("Example 3 (duplicates): ");
    print_list(list3);

    return 0;
}