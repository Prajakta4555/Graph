#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"queue.h"


void initQueue(CircularQueue *queue, int size){
    queue->front = -1;
    queue->rear = -1;
    queue->arr = (int*)malloc(sizeof(int)*size);
    queue->size = size;
    return;
}

int isEmptyQ(CircularQueue queue){
    if(queue.front == -1 && queue.rear == -1)
        return INT_MAX;
    else
        return INT_MIN;
}

int isFullQ(CircularQueue queue){
    if((queue.front == 0 && queue.rear == queue.size - 1)|| (queue.front == queue.rear + 1))
        return INT_MAX;
    else
        return INT_MIN;
}

void enqueue(CircularQueue *queue, int data){
    if(isFullQ(*queue) == INT_MAX)
        return;
    if(isEmptyQ(*queue) == INT_MAX){
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1)%queue->size;
    queue->arr[queue->rear] = data;
    return;
}

int dequeue(CircularQueue *queue){
    int x;
    if(isEmptyQ(*queue) == INT_MAX)
        return;
    if(queue->front == queue->rear){
        x = queue->arr[queue->front];
        queue->front = -1;
        queue->rear = -1;
    }
    else{
        x = queue->arr[queue->front];
        queue->front = (queue->front + 1)%queue->size;
    }
    return x;
}

void displayQueue(CircularQueue queue){
    if (isEmptyQ(queue) == INT_MAX)
        return;

    if(queue.rear >= queue.front){
        for (int i = queue.front; i <= queue.rear; i++)
            printf("%d\t",queue.arr[i]);
    }
    else{
        for (int i = queue.front; i < queue.size; i++)
            printf("%d\t", queue.arr[i]);

        for (int i = 0; i <= queue.rear; i++)
            printf("%d\t", queue.arr[i]);
    }
    printf("\n");
}

