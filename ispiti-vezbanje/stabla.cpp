#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char value;
    struct node *left;
    struct node *right;
}NODE;

struct node * root = NULL, *temp = NULL;

struct node * create_node(char value){
    temp = (struct node *) malloc(sizeof(struct node));
    temp->value = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
//- inorder: LKD
//- preorder: KLD
//- postorder: LDK

void inorder(struct node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%c", root->value);
        inorder(root->right);
    }
}

void preorder(struct node * root){
    if(root != NULL){ 
        printf("%c", root->value);
        preorder(root->left);
        preorder(root->right);
   }
}

void postorder(struct node * root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right); 
        printf("%c", root->value);
   }
}

void delete_tree(struct node * root){
    if(root){
        delete_tree(root->left);
        delete_tree(root->right);
        free(root);
    }   
}

struct node * add_tree(struct node * grana , char side ='U', char value = ' ' ){
    if(grana == NULL){
        root = create_node(value);
        return root;
    }
    if(side == 'L'){
        grana->left = create_node(value);
        return grana->left;
    }
    if(side == 'R'){
        grana->right = create_node(value);
        return grana->right;
    }
    return grana;
}

int main(int argc, char ** argv){
    NODE * A = add_tree(root, 'K', 'A');
    NODE * B = add_tree(root, 'L', 'B');
    NODE * C = add_tree(root, 'R', 'C');
    NODE * D = add_tree(B, 'L', 'D');
    NODE * E = add_tree(C, 'L', 'E');
    NODE * F = add_tree(C, 'R', 'F');
    NODE * G = add_tree(E, 'R', 'G');
    NODE * H = add_tree(F, 'L', 'H');
    NODE * I = add_tree(F, 'R', 'I');
    preorder(A);
    printf("\n");
    postorder(root);
    return 0;
}