#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Node{
    struct Node *previous;
    struct Node *next;
    float val;
};

struct Node *createNode(float val){
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    n->previous = NULL;
    n->next = NULL;
    n->val = val;
    return n;
}

struct Queue{
    struct Node *first;
    struct Node *last;
};

bool QueueIsEmpty(struct Queue *q){
    return (q->first == NULL) && (q->last == NULL);
}

void insertQueue(struct Queue *q, float val){
    struct Node *n = createNode(val);

    if (QueueIsEmpty(q)){
        q->first = n;
        q->last = n;
    } else {
        q->last->next = n;
        n->previous = q->last;
        q->last = n;
    }
    
}

struct Node *firstNode(struct Queue *q){
    if (QueueIsEmpty(q)){
        return NULL;
    }
    return q->first;
}

struct Node *lastNode(struct Queue *q){
    if (QueueIsEmpty(q)){
        return NULL;
    }
    return q->last;
}

struct Node *popFirstNode(struct Queue *q){
    if (QueueIsEmpty(q)){
        return NULL;
    }

    struct Node *n = q->first;
    q->first = n->next;

    // check if by removing the first node the queue is empty
    if (q-> first == NULL){
        q->last = NULL;
    }else {
        q->first->previous = NULL;
    }
    
    return n;
}
    

int main() {
    struct Queue q = {NULL, NULL};

    printf("Inserting 3 values...\n");
    insertQueue(&q, 10.5);
    insertQueue(&q, 20.5);
    insertQueue(&q, 30.5);

    printf("First value: %.2f\n", firstNode(&q)->val);
    printf("Last value: %.2f\n", lastNode(&q)->val);

    printf("\nPopping values:\n");
    struct Node *n;

    while ((n = popFirstNode(&q)) != NULL) {
        printf("Popped: %.2f\n", n->val);
        free(n);
    }

    printf("\nQueue empty? %s\n", QueueIsEmpty(&q) ? "yes" : "no");

    return 0;
}