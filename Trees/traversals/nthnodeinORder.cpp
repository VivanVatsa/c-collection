#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// for the new node

struct node *newNode(int data) {
    struct node *node= (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void nthinOrder(struct node *node, int n) {
    static int count =0;
    if (node == NULL)
        return;
    if (count<=n) {
        // first recur on the left child
        nthinOrder(node->left, n);
        count++;

        if (count == n)
            cout <<node->data<<" ";
        // now recur on the right child/ node
        nthinOrder(node->right, n);
    }
}

int main()
{
    struct node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);

    int n = 4;

    // NthInorder(root, n);
    nthinOrder(root, n);
    return 0;
}