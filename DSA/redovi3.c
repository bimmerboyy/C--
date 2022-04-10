//red sa dva pristupna kraja

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100

int red[SIZE];
int f = -1;
int r = -1;

bool isFull(){
    return (f == (r+1) % SIZE); // ako je red pun
}

bool isEmpty(){
    return (f == -1);
}


void insert_r(int elem){
    if(isFull()){
        printf("Red je pun");
        return ; 
    }
    if(isEmpty()){
        r = 0;
        f = 0;
        red[r] = elem;
        return;
    }
    r = (r+1) % SIZE;
    red[r] = elem;     
}

void insert_f(int elem){
    if(isFull()){
        printf("Red je pun");
        return ; 
    }
    if(isEmpty()){
        r = 0;
        f = 0;
        red[r] = elem;
        return;
    }
    f = (f+SIZE-1) % SIZE;
    red[f] = elem;     
}

int delete_r(){
    if(isEmpty()){
        printf("Underflow");
        return -1;
    }
    int elem = red[f];
    if(f == r){ 
        f = -1;
        r = -1;
        return elem;
    }
    else{
        r = (r+SIZE-1) % SIZE;
        return elem;
    }
}

int delete_f(){
    if(isEmpty()){
        printf("Underflow");
        return -1;
    }
    int elem = red[f];
    if(f == r){ 
        f = r = -1;
        return elem;
    }
    else{
        f = (f+1) % SIZE;
        return elem;
    }
}

void display(){
    int i;
    if(isEmpty()){
        printf("Underflow");
        return;
    }
    for(i = f; i!=r; i =(i+1) % SIZE){
        printf("%d \n", red[i]);   
    }
    printf("%d ", red[i]);
}


int main(){ 
    for(int i = 1; i<=7; i++){
        insert_r(i); 
    }
    delete_f();
    delete_f();
    insert_r(8);
    delete_r();
    delete_r();
    delete_r();
    insert_f(9);
    insert_f(10);
    insert_f(11);
    display();
    return 0;
}