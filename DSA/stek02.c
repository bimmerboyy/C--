//Implementacija preko lancane liste

#include<stdio.h>
#include<stdlib.h>

typedef  struct node{
    int data;
    struct node *link;
}NODE;
NODE *top = NULL;
void push(int elem){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Stek je prazan");
    }
    else{
        temp->data = elem;
        temp->link = top;
        top = temp;
    }

}
int pop(){
    NODE *t;
    int info;
    if(top == NULL){
        printf("Stek je prazan\n");
        return -1;
    }
    top = t;
    info = top->data;
    top = top->link;
    t->link = NULL;
    free(t);
    return (info);
}
int display(){
    NODE *t;
    if(top == NULL){
        return -1;
    }
    else{
        t = top;
        while(t){
            printf("%d",t->data);
            t = t->link;
        }
    }
    return t->data;
}
int main(){
    push(1);
    push(2);
    push(3);
    display();
    return 0;
}