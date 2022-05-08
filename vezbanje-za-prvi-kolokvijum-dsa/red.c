#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

int f = -1; 
int r = -1;
int cq[SIZE];


bool is_empty(){
    return f == -1 && r == -1;
}

bool is_full(){
    return f == 0 && r == SIZE-1 ||  f == r + 1;
}

void insert(int elem){
    if(is_full()){
        printf("overflow \n");
        return;
    }
    if(is_empty()){
        f = 0;
    }
    r = (r + 1) % SIZE;
    cq[r] = elem;
}

int delete_cq(){
    if(is_empty()){
        printf("underflow \n");
        return -1;
    }
    int elem = cq[f];
    if(f==r){
        f = -1;
        r = -1;
        return -1;
    }
    f = (f + 1) % SIZE;
    return elem;
}

void display(){
    if(is_empty()){
        printf("Underflow \n");
        return ;
    }
    int i;
    for(i = f; i != r; i = (i + 1) % SIZE){
        printf("%d \n" , cq[i]);
    }
    printf("%d \n" , cq[i]);
}

int  main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    delete_cq();
    display();
    return 0;
}