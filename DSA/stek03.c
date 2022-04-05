#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int s[SIZE],top[3] = {0,-1,SIZE};

int Sfull(){
    if(top[1] == top[2]){
        printf("Stek je pun\n");
        return 1;
    }
    else{
        printf("Stek je prazan\n\n");
        return 0;
    }
}
int Sempty(int stno){

    switch(stno){
        case 1:
        if(top[stno] == -1){
            printf("Prvi stek je prazan\n");
            return 1;
        }
        else{
            printf("Prvi stek nije prazan\n");
            return 0;
        }
        break;
        case 2:
        if(top[stno] == SIZE){
            printf("Drugi stek je prazan\n");
            return 1;
        }
        else{
            printf("Drugi stek nije prazan\n");
            return 0;
        }
        break;
    }
    return 0;

}
int push(int elem, int stno){
    int pos;
    if(Sfull()){
        printf("1.Stek je pun");
        return 1;
    }
    else{
        if(stno == 1){
       pos = ++top[stno];
   }
   else if(stno == 2){
       pos = --top[stno];
  }
   s[pos] = elem;
    }  
}
int main(){
    
}