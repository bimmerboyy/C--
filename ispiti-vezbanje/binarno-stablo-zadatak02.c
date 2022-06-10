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
// Za obicno stablo
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

void inorder(struct tree *tree){
    if(tree){
        inorder(tree->left);
        printf("%d",tree->data);
        inorder(tree->right);    
    }
}
void postorder(struct tree *tree){
    if(tree){
        postorder(tree->left);
        postorder(tree->right); 
        printf("%d",tree->data);   
    }
}
void preorder(struct tree *tree){
    if(tree){
        printf("%d",tree->data);
        preorder(tree->left);
        preorder(tree->right);    
    }
}

// Za bts

struct tree *addForBTS(struct tree *root,int elem){
    if(root == NULL){
        root = createNode(elem);
    }
    if(elem < root->data){
        root->left = addForBTS(root->left,elem);
        
    }
    if(elem > root->data){
        root->right = addForBTS(root->right,elem);
        
    }
    return root;
}

int zbirElemenata(struct tree *root){
    int s = 0;
    if(root){
        s = root->data;
        s+= zbirElemenata(root->left);
        s += zbirElemenata(root->right);
    }
    return s;
}

int main(){
    root = createNode(1);
    addForBTS(root,2);
    addForBTS(root,3);
    addForBTS(root,4);
    addForBTS(root,5);
    addForBTS(root,6);
    addForBTS(root,7);
    addForBTS(root,8);
    addForBTS(root,9);
    inorder(root);
    printf("\nZbir elemnat u bts je:\n");
    printf("%d",zbirElemenata(root));
    return 0;
}