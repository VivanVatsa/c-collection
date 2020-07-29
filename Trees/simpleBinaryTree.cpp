#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// typedef struct node
// {
//     int data;
//     node *left;
//     node *right;
// } node;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int main(void)
{
    // node *root = newNode(1);
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(5);
    root->right->left = newNode(6);
    getchar();
    return 0;
}