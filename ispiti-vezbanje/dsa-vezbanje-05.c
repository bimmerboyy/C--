/*С обзиром на корен бинарног стабла, вратите величину максималног независног скупа (МИС) у њему.

Независни скуп је скуп чворова у бинарном стаблу, од којих нема два суседна, тј. нема ивице која повезује било које две.
Величина независног скупа је укупан број чворова који садржи. Проблем максималног независног скупа је проналажење независног
скупа највеће могуће величине за дато бинарно стабло.

Input:
		   1
		 /   \
		/	  \
	   /	   \
	  2			3
	   \	   / \
		\	  /	  \
		 4	 5	   6
			/ \
		   /   \
		  7		8

Output: 5

Explanation: The Maximum Independent Set (MIS) is [1, 4, 6, 7, 8].
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

int findMISize(struct tree *tree){
   int br = 0;
   static int temp = 0;
    if(tree){
        findMISize(tree->left);
        findMISize(tree->right);
        if(tree->left == NULL && tree->right == NULL){
            temp++;
        }
        br = temp;
    }
    return br;
}






int main(){
    root = createNode(1);
    struct tree *dva = addTree(root,2,'L');
    struct tree *tri = addTree(root,3,'R');
    struct tree *cetiri = addTree(dva,4,'L');
    struct tree *pet = addTree(tri,5,'L');
    struct tree *sest = addTree(dva,6,'R');
    struct tree *sedam = addTree(tri,7,'R');
    struct tree *osam = addTree(sedam,8,'R');
    printf("%d ",findMISize(root));
     
    
    
    return 0;
}
