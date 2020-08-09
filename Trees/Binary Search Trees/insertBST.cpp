#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

class BST {
    int data;
    BST *left, *right;

public:
    // default constructor
    BST();
    // parameterised constructor
    BST(int);

    // insert function too
    BST *Insert(BST *, int);
    void Inorder(BST *);
};

// default constructor def
BST::BST() :data(0), left(NULL), right(NULL) {}

// parameter wala constructor def
BST::BST(int value) {
    data = value;
    left = right = NULL;
}

// insert function

BST *BST::Insert(BST *root, int value) {
    if (!root) {
        // insert the first pos if empty
        return new BST(value);
    }

    if (value < root->data) {
        // for left nodes
        root->left =Insert(root->left, value);
    }
    else {
        // for right nodes
        root->right = Insert(root->right, value);
    }

    return root;
}

// for sorted ordered traversal INORDER function
void BST::Inorder(BST *root) {
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main(void) {
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);

    b.Inorder(root);

    return 0;
}
