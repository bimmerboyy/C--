/* u programskom jeziku c napraviti program koji radi sa binarnim stablom pretraživanja.
implementirati funkciju za izračunavanje zbira elemenata stabla. demonstrirati rad programa u glavnoj funckiji.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int info;
    struct tree *left;
    struct tree *right;
}TREE;

TREE* root = NULL, *temp = NULL;

// create tree function

struct tree * create_node(int value){
    temp = (struct tree *) malloc(sizeof(struct tree));
    temp->info = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(struct tree * root){
    if(root){
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}

void preorder(struct tree * root){
    if(root){  
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct tree * root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->info);
    }
}

int saberi(struct tree * root){
    int s = 0;
    if(root){
        s = root->info;
        s += saberi(root->left);
        s += saberi(root->right);
    }
    return s;
}

TREE* insert(TREE* root, int info){
    if (root == NULL) {
        return create_node(info);
    }
    if (info < root->info) {
        root->left = insert(root->left, info);
    }
    if(info > root->info){
        root->right = insert(root->right, info);
    }
    return root;
}

int main(){
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 4);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 13);
    inorder(root);
    printf("%d ", saberi(root));
}