//https://www.geeksforgeeks.org/reverse-a-linked-list/

/*


        Initialize three pointers prev as NULL, curr as head and next as NULL.
        Iterate trough the linked list. In loop, do following.
        // Before changing next of current,
        // store next node
        next = curr->next

        // Now change next of current
        // This is where actual reversing happens
        curr->next = prev

        // Move prev and curr one step forward
        prev = curr
        curr = next

*/
// itereative method
/* 
while current != NULL
{
    next = current->next
    current->next = prev
    prev = current
    current = next
}
*head_ref = prev;
*/

struct node{
    int data;
    struct node *next;
    // init a contructor
    node(int data){
        this->data = data;
        next = NULL;

    }
};

// one more way to initialise a new linked_list

struct linkedList{
    node *head;
    linkedList(){
        head = NULL;
    }


//to reverse the linked_list

void reverse(){
    //init the current, prev and next pointers

    node *current = head;
    node *prev = NULL;
    node *next = NULL;

    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;

    }
    // *head_ref = prev;
    head = prev;

}

void print(){
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

// void insert() using for insertion of elements to be entered

void push(int data){
    node *temp = new node(data);
    temp->next = data;
    head = temp;
}
};


int main()
{
    /* Start with the empty list */
    linkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout << "Given linked list\n";
    ll.print();

    ll.reverse();

    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}