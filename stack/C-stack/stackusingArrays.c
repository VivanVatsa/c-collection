// #include <bits/stdc++.h>
#include <limits>
#include <stdio.h>
#include <stdlib.h>
// structure to represent stack

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// function to create a new stack. init size is always = 0
struct Stack *createStack(unsigned capacity){
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// func to check stack is full ? : condition: - stack full if (top = last index);
int stack_full(struct Stack *stack){
    return stack->top == stack->capacity - 1;
}

// func for stack empty ? : condn: - stack empty if (top = -1);
int stack_empty(struct Stack *stack){
    return stack->top == -1;
}

// to add values to stack : - increase top ++
void push(struct Stack *stack, int new_item){
    if(stack_full(stack))
        return;
    stack->array[++stack->top] = new_item;
    printf("%d pushed to stack\n", new_item);
}

// remove values from stack
int pop(struct Stack *stack){
    if(stack_empty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

// func to return top without removing it
int peek(struct Stack *stack){
    if(stack_empty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

// main func
int main(void){
    struct Stack *stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);

    printf("%d popped from the stack\n", pop(stack));

    return 0;
}