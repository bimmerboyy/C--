#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    char data_element;
    struct node *left, *right;
}NODE;

struct node *root = NULL;

struct node *new_node(int data_element){
    struct node *temp = (struct node *)malloc(sizeof(struct node)); 
    temp->data_element = data_element;
    temp->left = temp->right = NULL;
    return temp;
}

void print_inorder(struct node *root){
    if (root != NULL){
        print_inorder(root->left);
        printf("%c \n", root->data_element);
        print_inorder(root->right);
    }
}

void insert(struct node* grana, int data_element, char strana = 'k' ){
    if(grana == NULL){
        root = new_node(data_element);
        return;
    }
    if(strana == 'l'){
        grana -> left = new_node(data_element);
    }  
    if(strana == 'd'){
        grana -> right = new_node(data_element);
    }
}

int main(){
    insert(root, 'a');
    print_inorder(root);
    return 0;
}