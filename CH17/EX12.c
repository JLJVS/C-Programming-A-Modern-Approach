#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

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

struct node *find_last(struct node *list, int n){
    struct node *last = NULL;
    while (list != NULL){
        if (list->data == n){
            last = list;
        }
        list = list->next;
    }
    return last;
}


void print_list(struct node *list) {
    while (list != NULL) {
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n");
}

int main(void) {

    /* ------------------------ */
    /* Example 1: simple list   */
    /* ------------------------ */
    struct node *list1 = malloc(sizeof(struct node));
    list1->data = 1;
    list1->next = NULL;

    append_node(list1, 2);
    append_node(list1, 3);
    append_node(list1, 4);

    printf("Example 1 list: ");
    print_list(list1);

    struct node *last1 = find_last(list1, 3);
    printf("Last occurrence of 3: %p (value=%d)\n\n",
           (void*)last1, last1 ? last1->data : -1);


    /* ------------------------ */
    /* Example 2: repeated vals */
    /* ------------------------ */
    struct node *list2 = malloc(sizeof(struct node));
    list2->data = 5;
    list2->next = NULL;

    append_node(list2, 5);
    append_node(list2, 7);
    append_node(list2, 5);
    append_node(list2, 9);

    printf("Example 2 list: ");
    print_list(list2);

    struct node *last2 = find_last(list2, 5);
    printf("Last occurrence of 5: %p (value=%d)\n\n",
           (void*)last2, last2 ? last2->data : -1);


    /* ------------------------ */
    /* Example 3: no match      */
    /* ------------------------ */
    struct node *list3 = malloc(sizeof(struct node));
    list3->data = 10;
    list3->next = NULL;

    append_node(list3, 20);
    append_node(list3, 30);

    printf("Example 3 list: ");
    print_list(list3);

    struct node *last3 = find_last(list3, 99);
    printf("Last occurrence of 99: %p (value=%d)\n",
           (void*)last3, last3 ? last3->data : -1);

    return 0;
}