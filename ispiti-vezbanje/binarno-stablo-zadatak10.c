//Zadatak 10. Napisati rekurzivnu funkciju kojom se izračunava maksimalni element binarnog stabla.

#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int data;
    struct tree* left;
    struct tree* right;
}TREE;

TREE *root = NULL,*temp;

struct tree* createNode(int elem){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->data = elem;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

