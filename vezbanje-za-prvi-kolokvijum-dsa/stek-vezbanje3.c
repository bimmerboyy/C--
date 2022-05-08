//prebacivanje iz jednog steka u drugi 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 15


int s1[SIZE];
int s2[SIZE];

int t1 = -1;
int t2 = -1;

bool is_full1(){
    return t1 == SIZE-1;
}
bool is_full2(){
    return t2 == SIZE-1;
}
bool is_empty1(){
    return t1 ==  -1;
}
bool is_empty2(){
    return t2 ==  -1;
}

void push1(int elem){
    if(is_full1()){
        printf("Overflow1");
        return;
    }
    t1++;
    s1[t1] = elem;
}

void push2(int elem){
    if(is_full2()){
        printf("Overflow2");
        return;
    }
    t2++;
    s2[t2] = elem;
}

void display1(){
    if(is_empty1()){
        printf("Underflow");
        return;
    }
    for(int i = 0; i <= t1; i++){
        printf("%d \n", s1[i]);
    }
}

void display2(){
    if(is_empty2()){
        printf("Underflow");
        return;
    }
    for(int i = 0; i <= t2; i++){
        printf("%d \n", s2[i]);
    }
}

int main(){
    push1(1);
    push1(2);
    push1(3);
    push1(4);
    push1(5);
    display1();
    for(int i = 0; i<=t1; i++){
        push2(s1[i]);
    }
    display2();
    return 0;
}