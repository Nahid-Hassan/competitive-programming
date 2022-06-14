#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

void printLinkedList(struct node *head) {
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertLinkedList(int data, struct node *head) {
    struct node *temp  = head;

}

int main() {

}