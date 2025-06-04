#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head) {
    int count = 0;
    if (head == NULL) {
        printf("Linked List is Empty\n");
        return;
    }
    struct node* ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    printf("Number of nodes: %d\n", count);
}

int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));  // casting optional in C
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head->data = 10;
    head->link = NULL;

    printf("Head node data: %d\n", head->data);

    free(head);
    return 0;
}

