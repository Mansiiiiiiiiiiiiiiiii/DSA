#include <iostream>
using namespace std;

// Define the structure for a Node in the binary tree
struct Node {
    int key;
    Node *left, *right;
    
    Node(int value) : key(value), left(NULL), right(NULL) {}
};

// Function to perform preorder traversal of the binary tree
void preorder(Node *root) {
    if (root != NULL) {
        cout << (root->key) << " ";  // Visit the root node
        preorder(root->left);        // Recursively visit the left subtree
        preorder(root->right);       // Recursively visit the right subtree
    }
}

// Main function to test the preorder traversal
int main() {
    // Create a simple binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Perform and print the preorder traversal
    cout << "Preorder traversal of the binary tree is: ";
    preorder(root);
    cout << endl;

    // Free allocated memory (optional, but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}

