#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct Stack{
    int *A;
    int size;
    int top;
}Stack;

void init(Stack *s, int size);
int isEmpty(Stack s);
int isFull(Stack s);
void push(Stack *s, int data);
int pop(Stack *s);
int peek(Stack s);
void displayStack(Stack s);


#endif // STACK_H_INCLUDED
