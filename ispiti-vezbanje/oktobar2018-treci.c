/*u programskom jeziku c napisati program za rad sa binarnim stablom i sa radom sa binarnim stablom pretraživanja.
u glavnom programu omogućiti unos jednog ili drugog stabla, i ispisati elemente u preorder poretku za binarno stablo, a u postorderu
za binarno stablo pretraživanja.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct tree{
    int value;
    struct tree * left;
    struct tree * right;
}TREE;

struct tree *root, *temp, *root_bst;

struct tree *create_new_node(int elem){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp -> value = elem;
    temp -> right = NULL;
    temp -> left = NULL;
    return temp;
}

void print_inorder(struct tree * root){
    print_inorder(root->left);
    printf("%d", root->value);
    print_inorder(root->right);
}

void print_preorder(struct tree * root){
    printf("%d", root->value);
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_postorder(struct tree * root){
    print_postorder(root->left);
    print_postorder(root->right);
    printf("%d", root->value);
}

struct tree * insert(struct tree * grana, char strana, int elem ){
    if(root == NULL){
        return create_new_node(elem);
    }
    if(strana == 'l'){
        grana -> left = create_new_node(elem);
    }
    else if(strana == 'r'){
        grana -> right = create_new_node(elem);
    }
    return grana;
}

struct tree * insert_binary(struct tree * grana, int elem ){
    if(grana == NULL){
        return create_new_node(elem);
    }
    if(grana -> value > elem){
        grana -> left = insert_binary(grana->left, elem);
    }
    else{
        grana -> right = insert_binary(grana->right, elem);
    }
    return grana;
}


int main(){
    root = create_new_node(1);
    struct node* dva = insert(root, 'L', 2);
    struct node* tri = insert(root, 'R', 3);
    struct node* cetiri = insert(dva, 'L', 4);
    struct node* pet = insert(dva, 'R', 5);
    struct node* sest = insert(tri, 'L',6);
    struct node* sedam = insert(tri, 'R',7);
    struct node* osam = insert(sedam, 'R',8);
}