// Zadatak 1. Napisati rekurzivnu funkciju u pseudokodu kojom se ispisuje sadržaj informacionih polja u listovima binarnog stabla.

#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL,*temp;

struct tree *createNode(int elem){
    temp = (struct tree*)malloc(sizeof(struct tree));
    temp->data = elem;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}


int main(){

    return 0;
}