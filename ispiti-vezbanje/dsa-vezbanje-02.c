#include<stdio.h>
#include<stdlib.h>


typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL,*temp;

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
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}
void preorder(struct tree *tree){
    if(tree){
        printf("%d ",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
void postorder(struct tree *tree){
    if(tree){
        postorder(tree->left);
        postorder(tree->right);
        printf("%d ",tree->data);

    }
}



int main(){

    return 0;
}