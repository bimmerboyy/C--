//Napraviti stablo koje ima max tri potomka i napraviti funkciju da li je stablo kompletno


#include<stdio.h>
#include<stdlib.h>


typedef struct tree{
    int info;
    struct tree *left;
    struct tree *right;
    struct tree *middle;
}TREE;

TREE *root = NULL, *temp;


struct tree *createNode(int info){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->info = info;
    temp->left = NULL;
    temp->right = NULL;
    temp->middle = NULL;
    return temp;
}

int main(){

    return 0;
}