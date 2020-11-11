#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

class BST
{
	int data;
	BST *left;
	BST *right;
public:
	BST(); //default constructor
	BST(int); //parameterized
	BST* insert(BST*, int); // insert function
	void inorder(BST*);
};

// will define all the constructors
// default constructor
BST::BST(): data(0), left(NULL), right(NULL) {}

BST::BST(int value) {
	data = value;
	left = right = NULL;
}

BST* BST::insert(BST* root, int value) {
	if (!root) { //if first node is NULL create new node
		return new BST(value);
	}

	// if not then insert data
	if (value > root->data) {
		// if value is greater than root node data then it goes right

		root->right = insert(root->right, value);
	}

	else {
		root->left = insert(root->left, value);
	}
	return root;
}

void BST::inorder(BST* root) {
	if (!root) {
		return;
	}
	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}


int main(void) {
	BST b, *root = NULL;
	root = b.insert(root, 45);

	b.insert(root, 30);
	b.insert(root, 20);
	b.insert(root, 40);
	b.insert(root, 70);
	b.insert(root, 60);
	b.insert(root, 80);

	b.inorder(root);

	return 0;
}