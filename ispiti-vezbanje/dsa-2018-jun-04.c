//Stabla - Kreirati funkciju za izracunavane zbira elemenata u levom podstablu stabla

#include<stdio.h>
#include<stdlib.h>


typedef struct tree{
    int info;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL, *temp;

struct tree *createNode(int data){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->info = data;
    

}

int main(){
    return 0;
}
