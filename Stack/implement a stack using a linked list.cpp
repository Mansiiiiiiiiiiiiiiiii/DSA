#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
public:
    Node* head;
    int size;

    Stack() {
        this->size = 0;
        head = nullptr;
    }

    void push(int data) {
        Node* node = new Node(data);
        size++;
        node->next = head;
        head = node;
    }

    int pop() {
        if (head == nullptr) return -1;
        size--;
        Node* temp = head;
        int val = temp->data;
        head = head->next;
        delete temp;
        return val;
    }

    int peek() {
        if (head == nullptr) return -1;
        return head->data;
    }

    bool empty() {
        return this->size == 0;
    }

    int getSize() {
        return this->size;
    }
};

int main() {
    Stack st;

    st.push(1);
    st.push(2);

    cout << st.peek() << " " << endl;

    cout << st.pop() << " " << endl;
    cout << st.peek() << " " << endl;

    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}

