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

    int maks = 0;
    if(tree){
        int dubina1 = 0,dubina2 = 0;
        if(tree->left != NULL){
            dubina1++;
            dubina1+=brojNivoa(tree->left);
        }
        if(tree->right != NULL){
            dubina2++;
            dubina2+=brojNivoa(tree->right);
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


void ispisStablaPoNivima(struct tree *tree){
    if(tree){
        int br = 0;
      int  n = brojNivoa(tree);
        
        while(br < n){
            printf("%d,",tree->data);
            
        
            if(tree->left != NULL){
                ispisStablaPoNivima(tree->left);
                printf("%d,",tree->data);
                

            }
            if(tree->right != NULL){
                ispisStablaPoNivima(tree->right);
                printf("%d,",tree->data);
            }
            
            br++;
        
            
        }
        
        
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
   ispisStablaPoNivima(root);
   
  

 
    return 0;
}
   




    
