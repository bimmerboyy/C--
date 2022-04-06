
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

int top[2] = {-1, -1};
int s1[MAX], s2[MAX];

bool isEmpty(int number){
    return top[number] == -1;
}

bool isFull(int number){
    return (top[number] ==  MAX - 1);
}

void push(int elem, int number){
    if(isFull(number)){
        printf("Overflow");
    }
    else{
        top[number]++;
        if(number==0){
            s1[top[number]] = elem;
        }
        else if(number==1){
            s2[top[number]] = elem;
        }
    }
}
int pop(int number){
    int temp;
    if(isEmpty(number)){
        printf("underflow");
        return -1;
    }
    if(number == 0){
        temp = s1[top[number]--];
    }
    else if(number == 1){
        temp = s2[top[number]--];
    }
    return temp;
}
void display(int number){
    if(isEmpty(number)){
        printf("empty");
        return;
    }
    int i=0;
    for(i; i<=top[number]; i++){
        if(number==0){
            printf("%d", s1[i]);
        }
        else if(number==1){
            printf("%d", s2[i]);
        }
    }
}
void copy(){
    if(isEmpty(0)){
        printf("empty");
        return;
    }
    int i=0;
    for(i; i<=top[0]; i++){
        push(s1[i], 1);
    }
}
int  main(){
    for(int i = 0; i<10; i++){
        push(i, 0);
    }
    copy();
    display(0);
    display(1);
    return 0;
}