#include <iostream>
using namespace std;

// Definition of the Node structure
struct Node {
    int key;
    Node* left;
    Node* right;
    
    Node(int value) : key(value), left(NULL), right(NULL) {}
};

// Function for in-order traversal
void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << (root->key) << " ";
        inorder(root->right);
    }
}

int main() {
    // Create a simple binary tree
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    // Perform in-order traversal
    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    // Free allocated memory (for a real application, you'd want to free all nodes)
    // For simplicity, this step is skipped in this example.

    return 0;
}

