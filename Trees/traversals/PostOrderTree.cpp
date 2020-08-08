/*
Algorithm Postorder(tree)
   1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   3. Visit the root.
*/

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct node {
    int data;
    struct node *left, *right;
    node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void postOrder_traversal(struct node *node) {
    if (node == NULL)
        return;

    postOrder_traversal(node->left);
    postOrder_traversal(node->right);

    cout << node->data << " ";
}

int main(void) {

    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "\nPostorder traversal of binary tree is \n";
    postOrder_traversal(root);

    return 0;
}