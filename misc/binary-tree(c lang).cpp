#include <stdio.h>
#include <stdlib.h>

struct node {
	int number;
	struct node *left; //Left child
	struct node *right; //Right child
	struct node *up;
};

int menu(void);
struct node * createNode(struct node *current);
struct node * addNode(struct node *current, struct node *newNode);
void printAscendingUsingReccursion(struct node *current);
void printDescendingUsingReccursion(struct node *current);
void preOrder(struct node *current);

int main(void) {
	struct node *head = NULL;
	int choice;

	do {
		choice = menu();
		switch(choice) {
			case 0: {
				break;
			}
			case 1: {
				head = createNode(head);
				break;
			}
			case 2: {
				printAscendingUsingReccursion(head);
				printf("\n");
				break;
			}
			case 3: {
				printDescendingUsingReccursion(head);
				printf("\n");
				break;
			}
			case 4: {
				preOrder(head);
				printf("\n");
				break;
			}
		}
	} while(choice != 0);
	
	return 0;
}

//Preorder
void preOrder(struct node *current) {
	printf("%d ", current -> number);

	if(current -> left != NULL) {
		preOrder(current -> left);
	}	

	if(current -> right != NULL) {
		preOrder(current -> right);
	}
}


//Post order
void printDescendingUsingReccursion(struct node *current) {
	if(current -> right != NULL) {
		printDescendingUsingReccursion(current -> right);
	}

	printf("%d ", current -> number);

	if(current -> left != NULL) {
		printDescendingUsingReccursion(current -> left);
	}	
}

//In order
void printAscendingUsingReccursion(struct node *current) {
	if(current -> left != NULL) {
		printAscendingUsingReccursion(current -> left);
	}

	printf("%d ", current -> number);

	if(current -> right != NULL) {
		printAscendingUsingReccursion(current -> right);
	}	
}

struct node * addNode(struct node *current, struct node *newNode) {
	if(current == NULL) {
		return newNode;
	} else {
		if(current -> number == newNode -> number) {
			free(newNode);
			return current;
		}
		
		if(current -> number > newNode -> number) {
			if(current -> left == NULL) {
				current -> left = newNode;
				newNode -> up = current;
			} else {
				addNode(current -> left, newNode);
			}
		}
		else {
			if(current -> right == NULL) {
				current -> right = newNode;
				newNode -> up = current;
			} else {
				addNode(current -> right, newNode);
			}
		}
		return current;
	}
	
}

struct node * createNode(struct node *current) {
	int num;
	struct node *newNode;
	printf("Enter the number you wish to add into the tree: ");
	scanf("%d", &num);
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode -> number = num;
	newNode -> left = NULL;
	newNode -> right = NULL;
	return addNode(current, newNode);
}

int menu() {
	int choice;

	printf("This is a binary tree \n\n");
	printf("Menu...\n\n");
	printf("0. Exit\n");
	printf("1. Add Number to the Tree\n");
	printf("2. Sort in ascending order\n");
	printf("3. Sort in descending order\n");
	printf("4. Preorder\n");

	do {
		printf("\nEnter your choice...: ");
		scanf("%d", &choice);
	} while((choice > 4) || (choice < 0));
	return choice;
}
