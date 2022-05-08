//napraviti dva zasebna steka, 
//prvi ima 15 drugi 10, 
//u prvi dodati prvih 7 elemenata deljivih sa 13
//a u drugi iz prvog prebaciti parne brojeve.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE1 15
#define SIZE2 10

int s1[SIZE1];
int s2[SIZE2];

int t1 = -1;
int t2 = -1;

bool is_full1(){
    return t1 == SIZE1-1;
}
bool is_full2(){
    return t2 == SIZE2-1;
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
    for(int i = 13; i<=13*7; i+=13){
        push1(i);
        if(i % 2 == 0){
            push2(i);
        }
    }
    
    printf("Prvi stek: \n");
    display1();

    printf("Drugi stek: \n");
    display2();

    return 0;
}