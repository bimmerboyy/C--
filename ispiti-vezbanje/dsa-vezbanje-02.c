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
//standart tree
struct tree *addTree(struct tree *tree,int elem,char side){
    if(tree == NULL){
        return createNode(elem);
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

//BTS

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



int main(){
    root = createNode(1);
    // addBTS(root,2);
    // addBTS(root,3);
    // addBTS(root,4);
    // addBTS(root,5);
    // addBTS(root,6);

    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,2,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(dva,6,'R');
    struct tree *sedam = addTree(tri,7,'R');
    
    inorder(root);

    return 0;
}