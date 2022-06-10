//Zadatak 5. Napisati rekurzivnu funkciju kojom se izračunarava maksimalna dubina stabla.


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

int maksimalnaDubina(struct tree *tree){
    int maks = 0;
    if(tree){
        int dubina1 = 0,dubina2 = 0;
        if(tree->left != NULL){
            dubina1++;
            dubina1+=maksimalnaDubina(tree->left);
        }
          if(tree->right != NULL){
            dubina2++;
            dubina2+=maksimalnaDubina(tree->right);
        }
    
            if(dubina1 > dubina2){
                maks = dubina1; 
            }
            else{
                maks = dubina2; 
            }
        
       
    }
    return maks;
   
   
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
    inorder(root);
    printf("Maksimalna dubina stabla je:%d \n",maksimalnaDubina(root));
    
   
    return 0;
}



