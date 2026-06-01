#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *append(struct node *head, int value) {
    struct node *n = malloc(sizeof(struct node));
    n->value = value;
    n->next = NULL;

    if (head == NULL) {
        return n;
    }

    struct node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = n;
    return head;
}

void print_list(struct node *head) {
    for (struct node *p = head; p != NULL; p = p->next) {
        printf("%d ", p->value);
    }
    printf("\n");
}

void free_list(struct node *head) {
    struct node *p = head;
    while (p != NULL) {
        struct node *next = p->next;
        free(p);
        p = next;
    }
}

int main(void) {
    struct node *list = NULL;

    list = append(list, 10);
    list = append(list, 20);
    list = append(list, 30);

    print_list(list);

    free_list(list);
    
    return 0;
}
