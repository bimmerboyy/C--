#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 20

int red[MAX];
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


int main(){

    return 0;
}