#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 20

int red[SIZE];
int r = -1;
int f = -1;

bool is_empty(){
    return f == -1;
}

bool is_full(){
    return f == (r+1) % SIZE;
}

void insert_r(int elem){
    if(is_full()){
        printf("overflow\n");
        return;
    }
    if(is_empty()){
        r = f = 0;
        red[r] = elem;
    }
    else{
        r = (r+1) % SIZE;
        red[r] = elem;
    }
}

void insert_f(int elem){
    if(is_full()){
        printf("overflow\n");
        return;
    }
    if(is_empty()){
        r = f = 0;
        red[r] = elem;
    }
    else{
        f = (f + SIZE - 1) % SIZE;
        red[f] = elem;
    }
}

int delete_f(){
    if(is_empty()){
        printf("underflow\n");
        return -1;
    }
    int elem = red[f];
    if(f==r){
        f = -1;
        r = -1;
        return -1;
    }
    f = (f+1) % SIZE;
    return elem;
}

int delete_r(){
    if(is_empty()){
        printf("underflow\n");
        return -1;
    }
    int elem = red[r];
    if(f==r){
        f = -1;
        r = -1;
        return -1;
    }
    r = (r + SIZE - 1) % SIZE;
    return elem;
}

void display(){
    if(is_empty()){
        printf("underflow\n");
        return;
    }
    int i; 
    for (i = f; i != r; i = (i + 1) % SIZE){
        printf("%d \n", red[i]);
    }
    printf("%d  \n", red[i]);
}



int main(){
    insert_r(1);
    insert_r(2);
    insert_r(3);
    insert_r(4);
    insert_f(5);
    insert_f(6);
    insert_f(7);
    insert_f(8);
    delete_r();
    delete_f();
    insert_r(9);
    insert_f(10);
    display();
    return 0;
}