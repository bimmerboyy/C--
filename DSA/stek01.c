#include<stdio.h>

#define SIZE 5

int s[SIZE],top = -1;

int Sfull(){
    if(top == -1){
        return 1;
    }
    else return 0;
}
int Sempty(){
    if(top == -1){
        return 1;
    }
    else return 0;
}

void push(int elem){
    if(Sfull()){
        printf("Stek je pun\n");
    }
    else{
        top++;
        s[top] = elem;
    }
}

int main(){
    push(1);
    push(2);

    return 0;
}
