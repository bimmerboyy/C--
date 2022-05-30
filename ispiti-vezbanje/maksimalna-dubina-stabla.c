//Zadatak 5. Napisati rekurzivnu funkciju kojom se izračunarava maksimalna dubina stabla.
//Zadatak 4. Napisati rekurzivnu funkciju kojom se
// ispituje da li se element E nalazi u binarnom stablu.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

//ovo je uradido github kopile(ot), tako da ću ja na svoj teži način jer mi se more!
// int max_deepnest(struct node * root){
//     if(root == NULL){
//         return 0;
//     }
//     int left_deepnest = max_deepnest(root->left);
//     int right_deepnest = max_deepnest(root->right);
//     return (left_deepnest > right_deepnest) ? left_deepnest + 1 : right_deepnest + 1;
// }

NODE * find_parent(struct node * tree, struct node * child ){
    if(tree == NULL || tree == child) return NULL;

    if(tree->left != NULL  && tree->left == child)
        return tree; 

    if(tree->right != NULL && tree->right == child)
        return tree;

    temp = find_parent(tree->left, child);

    if(temp != NULL) return temp;

    temp = find_parent(tree->right, child);
    return temp;
}
int global_max = 0;

int max_deepnest(struct node * tree){
    if(tree){
        if(tree -> left == NULL && tree-> right == NULL ){
            temp = tree;
            int current_deepth = 1;
            while(1){
                temp = find_parent(root, temp);
                current_deepth ++;
                if(temp == root){
                    if(global_max < current_deepth){
                        global_max = current_deepth;
                    }
                    break;
                }
            }
        }
        max_deepnest(tree->left);
        max_deepnest(tree->right);
    }
    return global_max;
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
    struct node* devet = add_tree(osam, 'L',9);
    printf("%d",max_deepnest(root));
    return 0;
}