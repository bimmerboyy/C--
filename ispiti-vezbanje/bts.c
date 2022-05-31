#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left;
    struct node *right;
}NODE;

NODE *root = NULL, *temp = NULL;

struct node * create_new_node(int key){
    temp = (struct node *) malloc(sizeof(struct node));
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

NODE* insert(NODE* root, int key){
    if (root == NULL) {
        return create_new_node(key);
    }
    if (key < root->key) {
        root->left = insert(root->left, key);
    }
    if(key > root->key){
        root->right = insert(root->right, key);
    }
    return root;
}


void print_preorder(struct node * root){
    if(root){
        printf("%d", root->key);
        print_preorder(root->left);
        print_preorder(root->right);
    }
}

void print_inorder(struct node * root){
    if(root){
        print_inorder(root->left);
        printf("%d ", root->key);
        print_inorder(root->right);
    }
}

void print_postorder(struct node * root){
    if(root){
        print_postorder(root->left);
        print_postorder(root->right);
        printf("%d", root->key);
    }
}

int main(){
    root = insert(root, 3);
    insert(root, 15);
    insert(root, 43);
    insert(root, 2);
    insert(root, 35);
    insert(root, 33);
    insert(root, 5);
    insert(root, 12);
    insert(root, 8);
    print_inorder(root);
}