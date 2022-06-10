//Zadatak 9. Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata u listovima binarnog stabla.



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
struct tree *addBTS(struct tree *tree, int elem){
    if(tree == NULL){
        tree = createNode(elem);
    }
    if(elem < tree->data){
        tree->left = addBTS(tree->left, elem);
    }
    if(elem > tree->data){
        tree->right = addBTS(tree->right, elem);
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

int zbirElemenataNaListovima(struct tree *tree){
    int s = 0;
    if(tree){
        if(tree->left == NULL && tree->right == NULL){
            s+=tree->data;
        }
        s+=zbirElemenataNaListovima(tree->left);
        s+=zbirElemenataNaListovima(tree->right);
    }
    return s;
}




int main(){
    root = createNode(1);
    addBTS(root,2);
    addBTS(root,3);
    addBTS(root,4);
    addBTS(root,5);
    addBTS(root,6);
    addBTS(root,7);
    addBTS(root,8);
    addBTS(root,9);
    printf("Zbir elemenata na listovima je :%d",zbirElemenataNaListovima(root));
    return 0;
}



