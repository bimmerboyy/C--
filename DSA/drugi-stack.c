/*napravit prva 2 zasebna niza i steka,  privi ima 15, drugi 10.
 u prvi dodati prvih 7 elemenata koji su deljivi sa 13 a u drugi prebaciti parne brojeve 
 iz prvog.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size 20

int s[size], top = -1;

void push(int elem1, int elem2){
    if(sfull()){ 
        printf("Pun");
        return;
    }
    s1[++top] = elem1;
    s1[++top] = elem2;
}

int pop(){
    int elem;
    if(sempty()){
        printf("Prazan");
        return 0;
    }
    elem = s[top];
    top--;
    return elem;
}

int sfull(){
    if(top == size-2){
        return true;
    }
    return false;
}

bool sempty(){
    if(top == 2){
        return true;
    }
    return false;
}

int main(){
    int i;
    push(1,2);
    push(3, 4);
    push(5, 6);
    pop();
    for(i= 0; i<top; i++){
        printf("%d",s[i]);
    }
}