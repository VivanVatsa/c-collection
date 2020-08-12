#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

// new node creation logic
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// for the perfect traversal of the BST
void inorder(struct node *root)
{
    if (root != NULL) // this is the logic to of iteration to the leaf to sort it out in the form of a norma tree
    {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

// for insertion of a node into the BST
struct node *insert(struct node *node, int key)
{
    // if tree is empty then this or else......
    if (node == NULL)
        return newNode(key);

    // the recurring of tree starts from here
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

/* Given a non-empty binary search tree, return the node with minimum 
key value found in that tree. Note that the entire tree does not 
need to be searched. */
// non empty binary search tree is just not a perfect fit for the
struct node *minValueNode(struct node *node)
{
    struct node *current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// the delete function to remove the desired node with all the possibility
struct node *deleteNode(struct node *node, int key)
{
    // base case
    if (root == NULL)
        return root;
}