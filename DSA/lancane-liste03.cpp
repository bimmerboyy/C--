#include <iostream>
#include<stdlib.h>
using namespace std;
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*temp = NULL, *last = NULL;

int isEmpty(){
    if(first == NULL && last == NULL){
        return 1;
    }
    return 0;
}

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->elem = 10;
    temp -> next = NULL;
    if(first == NULL){
        first = temp;
        last = temp;
    }
    else{
        last -> next = temp;
        last = temp;
    }
}
int main(){

}