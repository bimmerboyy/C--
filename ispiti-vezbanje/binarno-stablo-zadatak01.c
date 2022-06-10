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
struct tree *addNode(struct tree *tree,char side,int elem){
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

void inorder(struct tree *tree){
    if(tree){
        inorder(tree->left);
        printf("%d", tree->data);
        inorder(tree->right);
    }

}
void postorder(struct tree *tree){
    if(tree){
        postorder(tree->left);
        postorder(tree->right);
        printf("%d", tree->data);
    }

}
void preorder(struct tree *tree){
    if(tree){
        printf("%d", tree->data);
        preorder(tree->left);
        preorder(tree->right);
       
    }

}
void sadrzajListiva(struct tree *root){
    if(root){
        if(root->left == NULL && root->right == NULL){
          printf("%d", root->data);
        }
        sadrzajListiva(root->left);
        sadrzajListiva(root->right);
    }
    
}

int main(){
    struct tree *root = createNode(1);
    struct tree *dva = addNode(root,'L',2);
    struct tree *tri = addNode(root,'R',3);
    struct tree *cetiri = addNode(dva,'L',4);
    struct tree *pet = addNode(tri,'L',5);
    struct tree *sest = addNode(dva,'R',6);
    struct tree *sedam = addNode(tri,'R',7);
    inorder(root);
    printf("\nSadrzaj listova:\n");
    sadrzajListiva(root);

    return 0;
}