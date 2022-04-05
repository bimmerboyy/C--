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
            printf("Prvi stek je prazan\n\n");
            return 1;
        }
        else{
            printf("Prvi stek nije prazan\n\n");
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
        printf("1.Stek je pun\n");
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
    return elem;  
}
int pop(int stno){
    int elem,pos;
    if(Sempty(stno)){
        printf("Stek je prazan\n");
        return -1;
    }
    else{
       pos = top[stno];
       elem = s[pos];
       if(stno == 1){
           top[stno]--;
       }
       else{
           top[stno]++;
       }
    }
    return elem;
}
int display(int stno){
    int i,elem;
    if(Sempty(stno)){
        return -1;
    }
    else{
        if(stno == 1){
            for(i = 0;i < top[stno];i++){
                printf("%d",s[i]);
            }
        }
        else{
            for(i = SIZE-1;i >= top[stno];i--){
                printf("%d",s[i]);
            }
        }
    }
}
int main(){
    push(1,1);
    printf("\n");
    push(2,2);
    printf("\n");
    push(3,1);
     printf("\n");
    push(4,2);
     printf("\n");
    push(5,1);
     printf("\n");
    push(6,2);
     printf("\n");
    pop(1);
    printf("Prvi stek je:\n");
    display(1);
    printf("\n\nDrugi stek je:\n");
    display(2);


}

