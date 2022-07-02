#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>

using namespace std;


struct Tree{
    int data;
    Tree *left;
    Tree *right;
};

 Tree *root = NULL,*temp;

Tree *createNode(int elem){
    temp = (Tree *) malloc(sizeof(Tree));
    temp->data = elem;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}
void inorder(Tree *tree){
    if(tree){
        inorder(tree->left);
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}
void preorder(Tree *tree){
    if(tree){
        printf("%d ",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
void postorder(Tree *tree){
    if(tree){
        postorder(tree->left);
        postorder(tree->right);
        printf("%d ",tree->data);

    }
}
//standart tree
Tree *addTree(Tree *tree,int elem,char side){
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

Tree *addBTS(Tree *tree,int elem){
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

void ispisPoLevelima(Tree *tree){
    if(tree == NULL){
        return;
    }
    queue<Tree*> q;
    q.push(tree);
    while(!q.empty()){
        Tree *current = q.front();
        printf("%d ",current->data);
        if(current->left != NULL){
            q.push(current->left);
        }
        if(current->right != NULL){
            q.push(current->right);
        }
        q.pop();
    }
}



int main(){
    root = createNode(1);
    // addBTS(root,2);
    // addBTS(root,3);
    // addBTS(root,4);
    // addBTS(root,5);
    // addBTS(root,6);

    Tree *dva = addTree(root,2,'L');
    Tree *tri = addTree(root,3,'R');
    Tree *cetiri = addTree(dva,4,'L');
    Tree *pet = addTree(tri,5,'L');
    Tree *sest = addTree(dva,6,'R');
    Tree *sedam = addTree(tri,7,'R');
    ispisPoLevelima(root);
    
    //inorder(root);

    return 0;
}