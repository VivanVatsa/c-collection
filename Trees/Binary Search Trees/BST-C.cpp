// #include <iostream>
// #include <conio.h>
// #include <stdlib.h>
// #include <bits/stdc++.h>

// using namespace std;

// struct node
// {
// 	int key;
// 	struct node *left;
// 	struct node *right;
// };

// // different function to create a new node

// struct node *newNode(int key)
// {

// 	struct node *temp = (struct node *)malloc(sizeof(struct node));
// 	temp->key = key;
// 	temp->left = temp->right = NULL;
// 	return temp;
// }

// void inorder(struct node *root) {

// 	if (root != NULL) {
// 		inorder(root->left);
// 		printf("%d\n", root->key);
// 		inorder(root->right);
// 	}
// }

// struct node *insert(struct node *node, int key) {
// 	// checking for different condn here
// 	// first condn checks whether the tree is empty. if it is then assign a newnode with this properties
// 	if (node == NULL)
// 		return newNode(key);

// 	// if its full then we have to check
// 	if (node->key > key)
// 		node->left = insert(node->left, key);
// 	else if (node->key < key)
// 		node->right = insert(node->right, key);

// 	return node;
// }

// int main(void) {
// 	struct node *root = NULL;
// 	root = insert(root, 50);
// 	insert(root, 30);
// 	insert(root, 20);
// 	insert(root, 40);
// 	insert(root, 70);
// 	insert(root, 60);
// 	insert(root, 80);

// 	inorder(root);

// 	return 0;
// }


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