// binary heap
#include <bits/stdc++.h>
using namespace std;
// #define MAX 500
// #define f(x) x+x^2

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int key) {

	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = key;
	temp->left = temp->right = NULL;

	return temp;
}

void insert(struct node *head, int data) {

}
