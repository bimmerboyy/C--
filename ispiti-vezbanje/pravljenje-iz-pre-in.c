#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node* left;
    struct node* right;
};

int search(char arr[], int strt, int end, char value);
struct node* newNode(char data);
 
/* Recursive function to construct binary of size len from
   Inorder traversal in[] and Preorder traversal pre[].  Initial values
   of in_pocetak and in_kraj should be 0 and len -1.  The function doesn't
   do any error checking for cases where inorder and preorder
   do not form a tree */
struct node* buildTree(char in[], char pre[], int in_pocetak, int in_kraj){
    static int preIndex = 0;
 
    if (in_pocetak > in_kraj)
        return NULL;
    /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
    struct node* tNode = newNode(pre[preIndex++]);
    /* If this node has no children then return */
    if (in_pocetak == in_kraj)
        return tNode;
    /* Else find the index of this node in Inorder traversal */
    int inIndex = search(in, in_pocetak, in_kraj, tNode->data);
    /* Using index in Inorder traversal, construct left and
     right subtress */
    tNode->left = buildTree(in, pre, in_pocetak, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, in_kraj);
    return tNode;
}
 
/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is present in in[] */
int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
    return 0;
}

struct node* newNode(char data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
/* This function is here just to test buildTree() */
void printInorder(struct node* node){
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%c ", node->data);
    printInorder(node->right);
}

int main()
{
    char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
    char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
    int len = sizeof(in) / sizeof(in[0]);
    struct node* root = buildTree(in, pre, 0, len - 1);
    printInorder(root);
}