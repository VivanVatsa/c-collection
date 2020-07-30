#include <bits/stdc++.h>
using namespace std;

/*
The idea is to do iterative level order traversal of the given tree using queue. If we find a node whose left child is empty, we make new key as left child of the node. Else if we find a node whose right child is empty, we make new key as right child. We keep traversing the tree until we find a node whose either left or right is empty.
*/
struct Node
{
    int key;
    Node *left;
    Node *right;

    // a constructor for init asssignment
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

// we will just do a inorder traversal
void inOrder_traversal(Node *temp)
{
    if (!temp)
        return;

    inOrder_traversal(temp->left);
    cout << temp->key << " ";
    inOrder_traversal(temp->right);
}

void insert(Node *temp, int key)
{
    queue<Node *> q;
    q.push(temp);

    // to find a empty place and insert the element a simple trick
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (!temp->left)
        {
            temp->left = new Node(key);
            break;
        }
        else
        {
            q.push(temp->left);
        }
        if (!temp->right)
        {
            temp->right = new Node(key);
            break;
        }
        else
        {
            q.push(temp->right);
        }
    }
}

int main(void)
{
    Node *root = new Node(10);
    root->left = new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);

    cout << "Inorder traversal before insertion:";
    inOrder_traversal(root);

    int key = 12;
    insert(root, key);

    cout << endl;
    cout << "Inorder traversal after insertion:";
    inOrder_traversal(root);

    return 0;
}