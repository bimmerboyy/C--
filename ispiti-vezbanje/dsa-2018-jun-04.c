//Stabla - Kreirati funkciju za izracunavane zbira elemenata u levom podstablu stabla

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>


typedef struct tree{
    int info;
    struct tree *left;
    struct tree *right;
}TREE;

TREE *root = NULL, *temp;

struct tree *createNode(int data){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->info = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct tree *tree){
    if(tree){
    inorder(tree->left);
    printf("%d",tree->info);
    inorder(tree->right);
    }
    
}
void postorder(struct tree *tree){
    if(tree){
    inorder(tree->left);
    inorder(tree->right);
    printf("%d",tree->info);
    }
}
void preorder(struct tree *tree){
    if(tree){
    printf("%d",tree->info);
    inorder(tree->left);
    inorder(tree->right);
    }
}

struct tree *addTree(struct tree *tree, int elem,char side){
    if(tree == NULL){
        tree = createNode(elem);
        return tree;
    }
    if (side == 'L'){
       tree->left = createNode(elem);
       return tree->left;
    }
    if (side == 'R'){
       tree->right = createNode(elem);
       return tree->right;
    }
    return tree;
}

int zbirElemenataNaLevomPodstablu(struct tree *tree, bool  prvi_put){
    int s = 0;
    if(tree){
        if(prvi_put == true){
            s += zbirElemenataNaLevomPodstablu(tree -> left, false);
        }
        else{
            s = tree -> info; 
            s += zbirElemenataNaLevomPodstablu(tree -> left, false);
            s += zbirElemenataNaLevomPodstablu(tree -> right, false);
        }
    }
    return s;
}


int main(){
    root = createNode(1);
    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,3,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(dva,6,'R');
    struct tree *sedam = addTree(tri,7,'R');
    printf("%d",zbirElemenataNaLevomPodstablu(root,true));
    return 0;
}
