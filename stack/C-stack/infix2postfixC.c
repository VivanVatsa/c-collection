/*
Algorithm
1. Scan the infix expression from left to right.
2. If the scanned character is an operand, output it.
3. Else,
…..3.1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty or the stack contains a ‘(‘ ), push it.
…..3.2 Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator. After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push the scanned operator in the stack.)
4. If the scanned character is an ‘(‘, push it to the stack.
5. If the scanned character is an ‘)’, pop the stack and and output it until a ‘(‘ is encountered, and discard both the parenthesis.
6. Repeat steps 2-6 until infix expression is scanned.
7. Print the output
8. Pop and output from the stack until it is not empty.
*/

#include <bits/stdc++.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

//creating a stack

struct Stack *createStack(unsigned capacity){
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    if(!stack)
        return NULL;
    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int *)malloc(stack->capacity * sizeof(int));

    return stack;
}
