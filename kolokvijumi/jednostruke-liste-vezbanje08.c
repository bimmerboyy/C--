
//c) ispituje da li se zadati element nalazi u listi

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

NODE *first=NULL, *last=NULL, *temp=NULL;

bool isEmpty(){
    return first == NULL;
}

void ubaci(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

void display(){
    if(isEmpty()){
        printf("Prazan \n");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}

/*

Bez rekurzije
bool daLiSeNalazi(int elem){
    temp = first;
    while(temp->next != NULL){
       
        if(temp->data == elem){
            printf("Nalzi se\n");
            
            return true;

        }
        printf("Ne nalazi se\n");
        return false;
        
    }
     temp = temp->next;
    
}
*/

bool daLiSeNalazi(struct node* temp,int elem){
    if(temp->next == NULL){
        return false;
    }
    if(temp->data == elem){
       return true;
    }
    return false || daLiSeNalazi(temp->next,elem);

}

int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(5);

    display();
    /*
    if(daLiSeNalazi(2)){
        printf("Nalazi se\n");
    }
    else{
        printf("Ne nalazi se\n");
    }
    */
    return 0;
}