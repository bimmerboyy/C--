/*С обзиром на корен бинарног стабла, вратите висину бинарног стабла. Висина бинарног стабла је укупан број
 ивица или чворова на најдужој путањи од коренског чвора до лисног чвора.

Решење треба да узме у обзир укупан број чворова на најдужој путањи. На пример, висина празног дрвета је 0,

 а висина дрвета са само једним чвором је 1.


 Input:
		   1
		 /   \
		/	  \
	   2	   3
	  /	\	  / \
	 /	 \ 	 /	 \
	4	  5	6	  7

Output: 3


Input:
		   1
		  /
		 /
		2
	   /
	  /
	 3
	/
   /
  4

Output: 4




 */

 

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

int dubinaStabla(struct tree *tree){
    int maks = 0;
    int temp1 = 0;
    int temp2 = 0;
    if(tree){
        
        
        if(tree->left != NULL){
            temp1++;
            temp1 += dubinaStabla(tree->left);
        }
        if (tree->right != NULL){
            temp2++;
            temp2 += dubinaStabla(tree->right);
        }
    }
    if(temp1 > temp2){
        maks = temp1;
    }
    else{
        maks = temp2;
    }
    return maks;
}






int main(){
    root = createNode(1);
    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,3,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(dva,6,'R');
    struct tree *sedam = addTree(tri,7,'R');
    
    printf("Dubina stabla je:%d",dubinaStabla(root));
    
   

    return 0;
}
