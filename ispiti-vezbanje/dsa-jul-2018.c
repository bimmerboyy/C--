//BTS Funkcija za izracunavanje elemenata u stablu

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL, *temp;

struct tree *createNode(int elem){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->data = elem;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct tree *tree){
    if(tree){
    inorder(tree->left);
    printf("%d",tree->data);
    inorder(tree->right);
    }
    
}
void preorder(struct tree *tree){
    if(tree){
    printf("%d",tree->data);
    inorder(tree->left);
    inorder(tree->right);
    }
    
}
void postorder(struct tree *tree){
    if(tree){
    inorder(tree->left);
    inorder(tree->right);
    printf("%d",tree->data);
    }
    
}

struct tree *addBTS(struct tree *tree,int elem){
    if(tree == NULL){
        return createNode(elem);
    }
    if(elem > tree->data){
        tree->right = addBTS(tree->right,elem);
    }
    if(elem < tree->data){
        tree->left = addBTS(tree->left,elem);
    }
    return tree;
}

int zbirElemenataBTS(struct tree *tree){
    int s = 0;
    if(tree){
    s = tree->data;
    s += zbirElemenataBTS(tree->left);
    s += zbirElemenataBTS(tree->right);
    }
    return s;
}




int main(){
    struct tree *root = createNode(1);
    addBTS(root,2);
    addBTS(root,3);
    addBTS(root,4);
    addBTS(root,5);
    addBTS(root,6);
    addBTS(root,7);
    inorder(root);
    printf("\nZbir elemenata u stalu je :%d",zbirElemenataBTS(root));

    return 0;
}