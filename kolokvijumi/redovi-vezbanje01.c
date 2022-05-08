#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 10

int f = -1;
int r = - 1;
int red[SIZE];

bool isEmpty(){
    return f == -1 && r == -1;
}
bool isFull(){
    return f == (r+1)%SIZE;     
}

void ubaci(int elem){
    if(isFull()){
        printf("overflow\n");
        return;
    }
    if(isEmpty()){
        f = 0;
        r = 0;
    }
    red[r] = elem;
    r = (r+1)%SIZE;
}

int izbrisi(){
    if(isEmpty()){
        printf("underflow\n");
        return -1;
    }
    if(f == r){
        f = r = -1;
    }
    int elem = red[f];
    f = (f+1)%SIZE;
    return elem;
}

void display(){
    int i;
    for(i = f;i != r;i = (i+1)%SIZE){
        printf("%d,",red[i]);

    }
    //printf("%d",red[i]);
}



int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    izbrisi();
    display();

    return 0;
}