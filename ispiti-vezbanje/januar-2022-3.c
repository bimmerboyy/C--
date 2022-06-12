// napraviti funkciju koja proverava da li je traženi element u stablu i proverava na kom nivou se nalazi.


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int key;
    struct node *left;
    struct node *right;
} NODE;

NODE *root = NULL, *temp = NULL;

struct node * create_new_node(int key){
    temp = (struct node *) malloc(sizeof(struct node));
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
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
        printf("%d", root->key);
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

bool pretraga(struct node * tree, int elem, int n = 0){
    if(tree){
        if(tree -> key == elem){
            printf("element se nalazi u stablu na %d nivou \n", n);
            return true;
        }
        return pretraga(tree->left, elem, n+1) || pretraga(tree->right, elem, n+1);
    }
    return false;
}


struct node * add_tree(struct node * grana , char side ='U', int value = 0 ){
    if(grana == NULL){
        root = create_new_node(value);
        return root;
    }
    if(side == 'L'){
        grana->left = create_new_node(value);
        return grana->left;
    }
    if(side == 'R'){
        grana->right = create_new_node(value);
        return grana->right;
    }
    return grana;
}

int main(){
    root = create_new_node(1);
    struct node* dva = add_tree(root, 'L', 2);
    struct node* tri = add_tree(root, 'R', 3);
    struct node* cetiri = add_tree(dva, 'L', 4);
    struct node* pet = add_tree(dva, 'R', 5);
    struct node* sest = add_tree(tri, 'L',6);
    struct node* sedam = add_tree(tri, 'R',7);
    struct node* osam = add_tree(sedam, 'R',8);
    print_inorder(root);
    if(pretraga(root, 8)){
        printf("\nNađen");
    }
    return 0;
}