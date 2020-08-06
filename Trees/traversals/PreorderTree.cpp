/*
Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)
*/

// the tree example
// https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

/*
Depth First Traversals:
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

Breadth First or Level Order Traversal : 1 2 3 4 5
*/

#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
// // #include <algorithm>
// #include <conio.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define ll long long int
// first we need 3 set values data, left node, right node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// the allocation of new node
struct node *newNode(int data) {
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

// the function to print for postorder tree traversal
void printPostorder(struct node *node) {
    if (node == NULL)
        return;
    // printf("%s\n", );
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    printf("%d ", node->data);

}
int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fast;
    int T; cin >> T;
    while (T--) {

    }
    // cout << T + T;

    struct node *root  = newNode(1);
    root->left             = newNode(2);
    root->right           = newNode(3);
    root->left->left     = newNode(4);
    root->left->right   = newNode(5);

    printf("\npostOrder traversal of binary tree is \n");
    // printInorder(root);
    printPostorder(root);

    return 0;
}
