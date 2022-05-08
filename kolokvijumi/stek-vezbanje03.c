#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 10

int top[3] = {0,-1,SIZE};
int s[SIZE];

bool isFull(){
    return top[1]+1 == top[2];
}
 

bool isEmpty(int niz){
    if(niz == 1){
        return top[niz] == -1;
    }
    if(niz == 2){
        return top[niz] == SIZE;
    }
    return -1;
}

void push(int niz,int elem){
   if(isFull()){
       printf("Overflow");
       return;
   }
   if(niz == 1){
       s[++top[niz]] = elem;
      
       
       return;
   }
   if(niz == 2){
       s[--top[niz]] = elem;
      
      
       return;
   }
}

int pop(int niz){
    if(isEmpty(niz)){
        printf("Underflow");
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
    int i;
    if(niz == 1){
        for(i = top[niz];i >= 0;i--){
        printf("%d\n",s[i]);
    }
    return;
    }
    if(niz == 2){
        for(i = SIZE-1;i >= top[niz];i--){
            printf("%d\n",s[i]);
        }
    }
    
}

int main(){
  
    printf("Prvi stek\n");
    push(1,1);
    push(1,2);
    push(1,3);
    push(1,4);
    push(1,5);
    pop(1);
    display(1);
    printf("Drugi stek\n");
    push(2,6);
    push(2,7);
    push(2,9);
    pop(2);
    display(2);
   


    return 0;
}