/*napravit prva 2 zasebna niza i steka,  privi ima 15, drugi 10.
 u prvi dodati prvih 7 elemenata koji su deljivi sa 13 a u drugi prebaciti parne brojeve 
 iz prvog.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size1 15
#define size2 10

int s1[size1],  s2[size2], top1 = -1, top2 = -1;
int sempty1(), sempty2(), sfull1(), sfull2(), display1(), display2();

void push1(int elem){
    if(sfull1()){ 
        printf("Pun");
        return;
    }
    s1[++top1] = elem;
}
void push2(int elem){
    if(sfull2()){ 
        printf("Pun");
        return;
    }
    s2[++top2] = elem;
}

pop1(){
    int elem;
    if(sempty1()){
        printf("Prazan");
        return 0;
    }
    elem = s1[top1];
    top1--;
    return elem;
}
pop2(){
    int elem;
    if(sempty2()){
        printf("Prazan");
        return 0;
    }
    elem = s2[top1];
    top2--;
    return elem;
}
sfull1(){
    if(top1 == size1-1){
        return true;
    }
    return false;
}
sfull2(){
    if(top2 == size2-1){
        return 1;
    }
    return 0;
}
sempty1(){
    if(top1 == -1){
        return 1;
    }
    return 0;
}
sempty2(){
    if(top2 == -1){
        return 1;
    }
    return 0;
}
void display1(){
    int i;
    if(sempty1()){
        for(i=0; i<=top1; i++){
            printf("%d", s1[i]);
        }
    }
}

void display2(){
    int i;
    if(sempty2()){
        for(i=0; i<=top2; i++){
            printf("%d", s2[i]);
        }
    }
}

int main(){
    int i;
    for(i = 1; i<=7; i++){
        push1(i*13);
        if(i % 2 == 0 ){
            push2(i*13);
        }
    }
}