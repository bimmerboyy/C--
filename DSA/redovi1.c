#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 12

int s[MAX], f = -1, r = -1;

bool isFull(){
    return (f == 0 && r == MAX - 1 || f == r + 1);
}

bool isEmpty(){
    return (f == -1 && r == -1);
}

void insert(int elem){
    if(isFull()){
        printf("Overflow");
        return;
    }
    if(f == -1){
        f = 0;
    }
    r = (r+1) % MAX;
    s[r] = elem;
}

int deleteFromFront(){
    if(isEmpty()){
        printf("Underflow");
        return -1;
    }
    else{
        int elem = s[r];
        if(f == r){
            f = r = -1;
            return -1;
        }
        else{
            f = (f+1) % MAX;
            return elem;
        }
    }
}
void display(){
    int i;
    if(isEmpty()){
        printf("Underflow");
    }
    else{
        for(i=f; i!=r; i = (i+1) % MAX){
            printf("%d ", s[i]);
        } 
        printf("%d ", s[i]);
    }
}

int main(){
    for(int i = 0; i<12; i++){
        insert(i);
    }
    deleteFromFront();
    deleteFromFront();
    deleteFromFront();
    deleteFromFront();
    deleteFromFront();
    deleteFromFront();
    for(int i = 0; i<6; i++){
        insert(i);
    }
    display();
    return 0;
}