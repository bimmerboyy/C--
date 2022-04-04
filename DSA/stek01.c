#include<stdio.h>

#define SIZE 5

int s[SIZE],top = -1,elem;

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
int pop(){
    if(Sempty()){
        printf("Nema elemenata za brisanje");
        return -1;
    }
    else{
        elem = s[top];
        top--;
       
    }
}

int main(){
    push(1);
    push(2);
    pop(2);

    return 0;
}
