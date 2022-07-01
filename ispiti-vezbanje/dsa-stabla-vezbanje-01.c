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
  temp->data = info;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

void inorder(struct tree *tree){
    inorder(tree->left);
    printf("%d ",tree->data);
    inorder(tree->right);
}
void preorder(struct tree *tree){
    printf("%d ",tree->data);
    preorder(tree->left);
    preorder(tree->right);
}
void postorder(struct tree *tree){
    postorder(tree->left);
    postorder(tree->right);
    printf("%d ",tree->data);
}

struct tree *addTree(struct tree *tree,int elem,char strana){
    if(tree == NULL){
        return createNode(elem);
    }
    if(strana == 'L'){
        tree->left = createNode(elem);
    }
    if(strana == 'R'){
        tree->right = createNode(elem);
    }
    return tree;
}


int main(){
    root = createNode(1);
    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,3,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(root,2,'L');



    return 0;
}