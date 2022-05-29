//create linked list of integers
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *new_node = NULL;
    int n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Unesite %d. broj: ", i + 1);
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            temp = new_node;
        } else {
            temp->next = new_node;
            temp = new_node;
        }
    }
    //print linked list

    return 0;
}