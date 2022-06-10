//Zadatak 2. Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata nepraznog binarnog stabla.

#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL,*temp;

struct tree* createNode(int elem){
    temp = (struct tree*)malloc(sizeof(struct tree));
    temp->data = elem;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct tree* addTree(struct tree *tree,char side,int elem){
    if(tree == NULL){
        root = createNode(elem);
        return root;
    }
    if(side == 'L'){
        tree->left = createNode(elem);
        return tree->left;
    }
    if(side == 'R'){
        tree->right = createNode(elem);
        return tree->right;
    }
    return tree;
}