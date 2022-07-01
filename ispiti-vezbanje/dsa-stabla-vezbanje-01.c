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

struct tree *addTree(struct tree *tree,int elem,char strana){
    if(tree == NULL){
        return createNode(elem);
    }
    if(strana == 'L'){
        tree->left = createNode(elem);
        return tree->left;
    }
    if(strana == 'R'){
        tree->right = createNode(elem);
        return tree->right;
    }
    return tree;
}

int brojNivoa(struct tree *tree){
    int n;
    if(tree){
        while(tree->left != NULL && tree->right != NULL){
            brojNivoa(tree->left);
            brojNivoa(tree->right);
            n++;
        }
       
    }
    return n;
}

void ispisStablaPoNivima(struct tree *tree,int n){
    if(tree){
       if(n == 0){
        printf("%d",tree->data);
       }
       
       ispisStablaPoNivima(tree->left,n+1);
       if(n < 0){
        printf("%d ",tree->data);
       }
     
       ispisStablaPoNivima(tree->right,n+1);
       
    }
}


int main(){
    root = createNode(1);
    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,3,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(dva,6,'R');
    struct tree *sedam = addTree(tri,7,'R');
    printf("%d",brojNivoa(root));
  // ispisStablaPoNivima(root,0);
    //inorder(root);



    return 0;
}