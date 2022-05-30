//Zadatak 8. Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata na n-tom nivou stabla, 
//pri čemu se koren stabla tretira kao nulti nivo.

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

int zbir_na_n_nivou(struct node *root, int n){
    int s = 0;
    if(root!=NULL){
        if(n!=0){
            s += zbir_na_n_nivou(root->left, n-1) ;
            s += zbir_na_n_nivou(root->right, n-1);
        }
        else{
            s += root->key;
        }
    }
    return s;
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
    struct node* root = create_new_node(1);
    struct node* dva = add_tree(root, 'L', 2);
    struct node* tri = add_tree(root, 'R', 3);
    struct node* cetiri = add_tree(dva, 'L', 4);
    struct node* pet = add_tree(dva, 'R', 5);
    struct node* sest = add_tree(tri, 'L',6);
    struct node* sedam = add_tree(tri, 'R',7);
    struct node* osam = add_tree(sedam, 'R',8);
    struct node* devet = add_tree(osam, 'R',9);
    printf("%d", zbir_na_n_nivou(root, 2));
    return 0;
}