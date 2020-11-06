#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
}

// different function to create a new node

struct node *
newNode(int item)
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}