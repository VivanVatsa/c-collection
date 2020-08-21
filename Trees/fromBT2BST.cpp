#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
// conversion of binary tree into binary search tree
/*
algorithm for conversion:

Following is a 3 step solution for converting Binary tree to Binary Search Tree.

1) Create a temp array arr[] that stores inorder traversal of the tree. This step takes O(n) time.
2) Sort the temp array arr[]. Time complexity of this step depends upon the sorting algorithm. In the following implementation, Quick Sort is used which takes (n^2) time. This can be done in O(nLogn) time using Heap Sort or Merge Sort.
3) Again do inorder traversal of tree and copy array elements to tree nodes one by one. This step takes O(n) time.

*/

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void storeInorder(struct node *node, int inorder[])