#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct CircularQueue{
    int front;
    int rear;
    int size;
    int *arr;
}CircularQueue;

void initQueue(CircularQueue *queue, int size);
int isEmptyQ(CircularQueue queue);
int isFullQ(CircularQueue queue);
void enqueue(CircularQueue *queue, int data);
int dequeue(CircularQueue *queue);
void displayQueue(CircularQueue queue);

#endif // QUEUE_H_INCLUDED
