#include<iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;

    // Constructor for easy node creation
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to delete the last node
Node* deleteFromEnd(Node* head) {
    if (head == NULL || head->next == NULL) {
        // If list is empty or has only one node
        delete head;  // Avoid memory leak
        return NULL;
    }

    Node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    delete curr->next;        // Delete the last node
    curr->next = NULL;        // Set second last node's next to NULL
    return head;
}

// Utility function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Utility function to add node at end
Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Main function to test
int main() {
    Node* head = NULL;

    // Insert some nodes
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    cout << "Original List: ";
    printList(head);

    // Delete last node
    head = deleteFromEnd(head);

    cout << "After Deletion from End: ";
    printList(head);

    // Clean up memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

