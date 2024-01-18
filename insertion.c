#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void insertAtBeginning(struct Node **head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}

void insertAfter(struct Node *prevNode, int data) {
  if (prevNode == NULL) {
    printf("Previous node cannot be null");
    return;
  }
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = prevNode->next;
  prevNode->next = newNode;
}

void insertAtEnd(struct Node **head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  struct Node *lastNode = *head;
  while (lastNode->next != NULL) {
    lastNode = lastNode->next;
  }
  lastNode->next = newNode;
}

void printLinkedList(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  struct Node *head = NULL;

  insertAtBeginning(&head, 10);
  insertAfter(head, 20);
  insertAtEnd(&head, 30);

  printLinkedList(head);

  return 0;
}