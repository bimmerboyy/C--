/*
u programskom jeziku c napisati program za rad sa stabilma implementriranim preko lančane liste. čiji svaki element ima 
maksimalno tri potomka, levi, desni, i srednj.
napisati funkcije za štampanje stabla, i ispitivanje da li je stablo komplemtno, i demonstrirati rad programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct tree{
    int info;
    struct tree *left;
    struct tree *middle;
    struct tree *right;
}TREE;

TREE * root = NULL, *temp = NULL;

TREE * create(int elem){
    temp = (TREE *) malloc(sizeof(TREE));
    temp->info = elem;
    temp->left = NULL;
    temp->middle = NULL;
    temp->right = NULL;
    return temp;
}

void preorder(struct tree * root){
    if(root){
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->middle);
        preorder(root->right);
    }
}

void inorder(struct tree * root){
    if(root){
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->middle);
        inorder(root->right);
    }
}

void postorder(struct tree * root){
    if(root){
        postorder(root->left);
        postorder(root->middle);
        postorder(root->right);
        printf("%d ", root->info);
    }
}

bool da_li_je_kompletno(struct tree * root){
    if(root){
        if( (root -> left == NULL  && root -> right == NULL && root -> middle == NULL) || (root -> left != NULL  && root -> right != NULL && root -> middle != NULL)){
            return true && da_li_je_kompletno(root -> left) && da_li_je_kompletno(root -> right) && da_li_je_kompletno(root -> middle);
        }
        return false;
    }
    return true;
}

int main(){
    root = create(1);
    struct tree* dva = create(2);
    struct tree* tri = create(3);
    struct tree* cetiri = create(4);
    struct tree* pet = create(5);
    struct tree* sest = create(6);
    struct tree* sedam = create(7);
    struct tree* osam = create(8);
    struct tree* devet = create(9);
    struct tree* deset = create(10);
    struct tree* jedanaest = create(11);
    struct tree* dvanaset = create(12);
    struct tree* trinaest = create(13);
    root -> left = dva;
    root -> middle = tri;
    root -> right = cetiri;
    dva -> left = pet;
    dva -> middle = sest;
    dva -> right = sedam; 
    tri -> left = osam; 
    tri -> middle = devet;
    tri -> right = deset;
    cetiri -> left = jedanaest;
    cetiri -> middle = dvanaset;
    cetiri -> right = trinaest;
    printf("\nInorder : \n");
    inorder(root);
    printf("\npreorder : \n");
    preorder(root);
    printf("\npostorder : \n");
    postorder(root);
    if(da_li_je_kompletno(root)){
        printf("\nKompletno");
    }
    else{
        printf("\nNije");
    }
}