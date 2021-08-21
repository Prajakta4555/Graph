#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"stack.h"

//Initialization
void init(Stack *s, int size){
    s->size = size;
    s->top = -1;
    s->A = (int *)malloc(sizeof(int)*s->size);
    return;
}

//Function to check list is empty or not
int isEmpty(Stack s){
    if(s.top == -1)
        return INT_MAX;
    else
        return INT_MIN;
}

//Function to check list is full or not
int isFull(Stack s){
    if(s.top == s.size-1)
        return INT_MAX;
    else
        return INT_MIN;
}

//Function to push data into stack
void push(Stack *s, int data){
    if(isFull(*s) == INT_MAX)
        return;
    else{
        s->top++;
        s->A[s->top] = data;
    }
    return;
}

//Function to get peek value
int peek(Stack s){
    if(isEmpty(s)== INT_MAX)
        return;
    else
        return s.A[s.top];
}

//Function to pop data from stack
int pop(Stack *s){
    int delElement;
    if(isEmpty(*s) == INT_MAX)
        return;
    else{
        delElement = s->A[s->top];
        s->top--;
    }
    return delElement;
}

//Function to display stack
void displayStack(Stack s){
    if(isEmpty(s)==INT_MAX)
        return;
    else{
        for(int i=s.top; i>=0; i--){
            printf("%d\t", s.A[i]);
        }
        printf("\n");
    }
}
