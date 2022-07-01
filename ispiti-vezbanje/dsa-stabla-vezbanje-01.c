//Napraviti funkciju za ispis stabla po nivoima od korena do zadnjeg nivoa od leva na desno

#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL, *temp;

struct tree *createNode(int info){
  temp = (struct tree *) malloc(sizeof(struct tree));
}

int main(){


    return 0;
}