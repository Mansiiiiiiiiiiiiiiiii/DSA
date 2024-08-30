#include <iostream>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    // Constructor to initialize the node
    Node(int k) : key(k), left(NULL), right(NULL) {}
};

int main() {
    // Initialize the root to NULL
    Node *root = NULL;
    
    // Optionally, you can create a root node with a specific value
    root = new Node(10);

    // Output the key of the root node to check
    cout << "Root node key: " << root->key << endl;

    // Clean up dynamically allocated memory
    delete root;

    return 0;
}

