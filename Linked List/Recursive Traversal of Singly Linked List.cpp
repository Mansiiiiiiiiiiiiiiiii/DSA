#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}  
	
};

// Function to print the linked list in reverse
void rPrint(Node* head) {
    if (head == NULL) {
        return;
    }
    rPrint(head->next);  // Recursive call
    cout << head->data << " ";  // Print after returning from recursion
}

// Function to add a new node at the end of the list
void append(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Main function to test the rPrint function
int main() {
    Node* head = NULL;

    // Creating a linked list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    cout << "Linked list in reverse order: ";
    rPrint(head);  // Call the function to print in reverse
    cout << endl;

    // Clean up memory (not shown for brevity)
    // Normally, you would want to delete all nodes here

    return 0;
}

