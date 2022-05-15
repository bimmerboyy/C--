#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    char data_element;
    struct node *left, *right;
}NODE;

struct node *root = NULL;

struct node *new_node(int data_element){
    struct node *temp = (struct node *)malloc(sizeof(struct node)); 
    temp->data_element = data_element;
    temp->left = temp->right = NULL;
    return temp;
}

void print_inorder(struct node *root){
    if (root != NULL){
        print_inorder(root->left);
        printf("%c ", root->data_element);
        print_inorder(root->right);
    }
}

void print_postorder(struct node *root){
    if (root != NULL){
        print_postorder(root->left);
        print_postorder(root->right); 
        printf("%c ", root->data_element);
    }
}

void print_preorder(struct node *root){
    if (root != NULL){
        printf("%c ", root->data_element);
        print_preorder(root->left);
        print_preorder(root->right); 
    }
}

struct node* insert(struct node* grana, int data_element, char strana = 'k' ){
    if(grana == NULL){
        root = new_node(data_element);
        return root;
    }
    if(strana == 'l'){
        grana -> left = new_node(data_element);
        return grana -> left;
    }  
    if(strana == 'd'){
        grana -> right = new_node(data_element);
        return grana -> right;
    }
    return grana;
}

int main(){
    struct node *A = root;
    A = insert(A, 'A');
    struct node *B = insert(A, 'B', 'l');
    struct node *D = insert(B, 'D', 'l');
    struct node *G = insert(D, 'G', 'd');
    struct node *C = insert(A, 'C', 'd');
    struct node *F = insert(C, 'F', 'd');
    struct node *E = insert(C, 'E', 'l');
    struct node *H = insert(E, 'H', 'l');
    struct node *I = insert(E, 'I', 'd');
    // struct node *B = insert(A, 'B', 'l');
    // struct node *D = insert(B, 'D', 'l');
    // struct node *C = insert(A, 'C', 'd');
    // struct node *E = insert(C, 'E', 'l');
    // struct node *F = insert(C, 'F', 'd');
    // struct node *G = insert(E, 'G', 'd');
    // struct node *H = insert(F, 'H', 'l');
    // struct node *I = insert(F, 'I', 'd');
    print_inorder(root);
    printf("\n");

    print_postorder(root);
    printf("\n");
    
    print_preorder(root);
    printf("\n");
  
 
    return 0;
}