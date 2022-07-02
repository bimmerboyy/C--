/*С обзиром на корен бинарног стабла, вратите његов клон. Решење треба да врати ново бинарно стабло које је по својој 
структури и садржају идентично датом бинарном стаблу и не би требало да користи чворове бинарног стабла.

Input:
		   1
		 /   \
		/	  \
	   2	   3
	  /	\	  / \
	 /	 \ 	 /	 \
	4	  5	6	  7

Output:

		   1
		 /   \
		/	  \
	   2	   3
	  /	\	  / \
	 /	 \ 	 /	 \
	4	  5	6	  7

*/
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
int maks(int elem,struct tree *tree,struct tree *levi,struct tree *desni){
    int maksEl;
    if(tree){
        if(tree->left->info > tree->right->info){
            maksEl = tree->left->info;
        }
        else{
            maksEl = tree->right->info;
        }
    }
    return maksEl;
}
int treeSum(struct tree *tree){
    int leftSum = 0;
    int rightSum = 0;
    if(tree == NULL){
        return 0;
    }
    else{
        leftSum = treeSum(tree->left);
        rightSum = treeSum(tree->right);

    }
    return tree->info + leftSum + rightSum;
}
// int treeMaks(struct tree *tree){
//     int leftSum = 0;
//     int rightSum = 0;
//     if(tree == NULL){
//         return 0;
//     }
//     else{
//         leftSum = treeSum(tree->left);
//         rightSum = treeSum(tree->right);

//     }
//     return maks(tree->info,tree,leftSum, rightSum);
// }

int treeMaks(struct tree *tree){
    int maks;
    int levi;
    int desni;
    if(tree){
        maks = tree->info;
        
        levi = treeMaks(tree->left);
        desni = treeMaks(tree->right);
        if(levi == desni){
           
            
            treeMaks(tree->left);
            treeMaks(tree->right);
            desni = tree->info;
            levi = tree->info;
           
            
            
            
        }
       
        
    
        printf("levi: %d\n",levi);
        printf("\ndesni: %d",desni);
        if(levi > desni){
            maks = levi;
        }
        else{
            maks = desni;
        }


        
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
     struct tree *osam = addTree(sedam,8,'R');
    

    printf("\nmaks:%d",treeMaks(root));
    
    
    
   

    return 0;
}
