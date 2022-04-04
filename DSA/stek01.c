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
int pop(){
    int elem;
    if(Sempty()){
        printf("Nema elemenata za brisanje\n");
        return -1;
    }
    else{
        elem = s[top];
        top--;
        return elem;
       
    }
}
int display(){
    int i;
    if(Sempty()){
        printf("Stek je prazan\n");
        return -1;
    }
    else{
        for(i = 0;i < top;i++){
            printf("%d",s[i]);
             printf("^Top");
        }
       
    }
    return 0;
}

int main(){
 

    return 0;
}
