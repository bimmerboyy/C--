//Stablo -Dodati funkciju search(int num) koja vraca true ako se cvor nalazi u stablu i na kom se nivou nalazi

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<stdbool.h>

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

bool search(struct tree *tree,int elem,int n){
    if(tree){
        if(elem == tree->data){
            printf("Na %d nivou se nalazi element:",n);
            return true;
        }
        return false || search(tree->left,elem,n+1) || search(tree->right,elem,n+1);
    }
    return false;
}







int main(){
    struct tree *root = createNode(1);
    addBTS(root,2);
    addBTS(root,3);
    addBTS(root,4);
    addBTS(root,5);
    addBTS(root,6);
    addBTS(root,7);
    //inorder(root);
    if(search(root,6,0)){
        printf(" 6");
    }
    else{
        printf("Element se ne nalazi u stablu");
    }
    return 0;
}