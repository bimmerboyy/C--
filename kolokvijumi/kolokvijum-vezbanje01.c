#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    if(first == NULL){
        return true;
    }
    return false;
}

void unos(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
    }
    else{
        last->next = temp;
        last = temp;
    }
}
void display(){
    if(isEmpty()){
        printf("Lista je prazna");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void posleZadatog(struct node *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = pom->next;
    pom->next = temp;
    if(pom == last){
        last = temp;
    }
    
}
void preZadatog(struct node *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = pom->data;
    pom->data = elem;
    temp->next = temp->next;
    pom->next = temp;
    if(isEmpty()){
        last = temp;
    }
}
void brisanjeNakon(struct node *pom){
    if(isEmpty()){
        printf("Prazna");
    }
    if(first == last & pom == first){
        first = NULL;
        last = NULL;
        free(pom);
    }
    if(pom == last){
        printf("Nemoguce obrisati");
        return;
    }
    if(pom->next == last){
        last = pom;
    }
    temp = pom->next;
    pom->next = temp->next;
    temp->next = NULL;
    free(temp);
}
void brisanjeZadatog(struct node *pom){
    if(isEmpty()){
        printf("Prazan");
        return;
    }
    if(first == last & pom == first){
        first = NULL;
        last = NULL;
        free(pom);
        return;
    }
    temp = pom->next;
    pom->next = temp->next;
    pom->data = temp->data;
    temp->next = NULL;
    free(temp);

}
void brisanjeNaZadatojPoziciji(int pos){
    int brojac = 0;
    temp = first;
    while(temp != NULL){
        if(brojac == pos){
            brisanjeZadatog(temp);
            return;
            
        }
        brojac++;
        temp = temp->next;
    }
}
void BrisanjeZadatevrednosti(int vrednost){
    temp = first;
    while(temp != NULL){
        if(temp->data == vrednost){
            brisanjeZadatog(temp);
            return;
        }
        temp = temp->next;
    }
}

void brisanjePreZadatog(struct node* pom){
    if(isEmpty()){
        printf("Lista je prazna\n");
    }
    if(first == last & pom == first){
        printf("Nemoguce je obristi pre zadatog elementa\n");
    }
    if(pom == first){
        printf("Nemoguce je obrisati");
    }
    struct node* q;
    q = first;
    temp = first->next;
    while(temp != pom){
        brisanjeZadatog(q);
        temp = temp->next;
        q = q->next;
    }
}


int main(){
    unos(1);
    unos(2);
    unos(4);
    //posleZadatog(first->next,3);
    brisanjeZadatog(first);
    //posleZadatog(first->next->next->next,5);
    //brisanjeNakon(first->next);
    
    display();

    return 0;
}

