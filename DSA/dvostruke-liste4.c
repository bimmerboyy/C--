#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct node *prev;
  struct node *next;
};

struct Node *head;

struct Node GetNode(int x) {
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = x;
  newNode->prev = NULL;
  newNode->next = NULL;
  return *newNode;
}
void Print() {
  struct Node* temp = head;
  temp = head;
  while (temp != NULL) {
    printf("%d", temp->data);
    temp = temp->next; // kuku mene sta da radim saddjed ssi  baarvte    kad mi na
                    // jvisenrtrebas ha kud sibrateha furtijanice furijanski d
  }
  printf("\n");
}
