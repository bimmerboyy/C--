#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int top[3] = {0, -1, MAX}, s[MAX];

bool is_full(){
    return top[2] - top[1] == 1;
}

bool is_both_empty(){
    return top[1] == -1 && top[2] == MAX;
}

bool is_empty(int niz){
    if(niz == 1){
        return top[1] == -1;
    }
    return top[2] == MAX;
}

void push(int elem, int niz){
    if(is_full()){
        printf("Overflow");
        return;
    }
    if(niz == 1){
        s[++top[1]] = elem;
        return;
    }
    if(niz == 2){
        s[--top[2]] = elem;
        return;
    }
}

int pop(int niz){
    if(is_empty(niz)){
        printf("Underflow");
        return -1;
    }
    int elem = s[top[niz]];
    if(niz == 1){
        top[niz]--;
    }
    if(niz == 2){
        top[niz]++;
    }
    return elem;
}

void display(int niz){
    if(niz == 1){
        for(int i = 0; i <= top[niz]; i++){
            printf("%d \n", s[i]);
        }
        return;
    }
    if(niz == 2){
        for(int i = MAX -1; i >= top[niz]; i--){
            printf("%d \n", s[i]);
        }
    }
}


int main(){
    push(1, 1);
    push(2, 1);
    push(3, 1);
    push(4, 1);
    push(5, 1);
    push(6, 1);
    push(7, 2);
    push(8, 2);
    push(9, 2);
    push(10, 2);
    display(2);    
    display(1);

    return 0;
}