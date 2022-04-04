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
        printf("Nema elemenata za brisanje\n\n");
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
        printf("Stek je prazan\n\n");
        return -1;
    }
    else{
        for(i = 0;i < top;i++){
            printf("%d",s[i]);
            printf("\n");
             printf("^Top");
        }
       
    }
    return s[i];
}

int main(){
    int option,elem;

    do{
       printf("Postoje 4 opcie:1.Push 2.Pop 3.Display 4.Exit\n\n");
       printf("Uneste broj operacije:");
       scanf("%d",&option);

       switch(option){
        case 1:
        printf("Unesite element:");
        scanf("%d", &elem);
        push(elem);         
        break;
        case 2:
        elem = pop();
        if(elem != -1){
            printf("Element koji je obrisan je: %d\n\n",elem);
        }
        break;
        case 3:
        printf("Stek sadrzi elemente:\n\n");
        display();
        break;
        case 4:
        printf("Netacna opcija,pokusajte ponovo\n");
       break;
       }
       
    }
    while(option != 4);
 

    return 0;
}
