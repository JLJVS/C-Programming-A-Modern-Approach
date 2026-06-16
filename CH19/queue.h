#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

struct Node {
    struct Node *previous;
    struct Node *next;
    float val;
};

struct Queue {
    struct Node *first;
    struct Node *last;
};

// Queue operations
bool QueueIsEmpty(struct Queue *q);
void insertQueue(struct Queue *q, float val);
struct Node *firstNode(struct Queue *q);
struct Node *lastNode(struct Queue *q);
struct Node *popFirstNode(struct Queue *q);

#endif