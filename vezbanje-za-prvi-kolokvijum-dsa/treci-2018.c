//napisati program u programskom jeziku c za rad sa redom od preko niza. U glavnoj funkciji kreirati dvva reda. 
//u prvi red dodati prvih 11 brojeva deljivih sa 2022, a zatim iz prvog reda prebaciti u drugi  samo
//brojeve deljive sa 6

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 20

int f1 = -1, r1 = -1;
int f2 = -1, r2 = -1;

int red1[SIZE], red2[SIZE];

bool is_empty(int number){
    if(number==1){
        return f1 == -1;
    }
    return f2 == -1;
}

bool is_full(int number){
    if(number == 1){
        return f1 == 0 && r1 == SIZE-1 ||  f1 == r1 + 1;
    }
    return f2 == 0 && r2 == SIZE-1 ||  f2 == r2 + 1;
}

void insert(int elem, int number){
    if(is_full(number)){
        printf("overflow \n");
        return;
    }
    if(is_empty(number)){
        if(number == 1){
            f1 = 0;
        }
        else{
            f2 = 0;
        }
    }
    if(number == 1){
        r1  = ( r1 + 1 ) % SIZE;
        red1[r1] = elem;
    }
    else if(number == 2){
        r2  = ( r2 + 1 ) % SIZE;
        red2[r2] = elem;
    }
   
}

int delete_red(int number){
    if(is_empty(number)){
        printf("empty");
        return -1;
    }
    if(number == 1){
        int elem =  red1[f1];
        if(f1 == r1){
            f1 = -1;
            r1 = -1;
        }
        else{
            f1 = (f1+1) % SIZE;
        }
        return elem;
    }
    else if(number == 2){
        int elem =  red2[f2];
        if(f2 == r2){
            f2 = -1;
            r2 = -1;
        }
        else{
            f2 = (f2+1) % SIZE;
        }
        return elem;
    }
    return -1;
}

void display(int number){
    if(is_empty(number)){
        printf("underflow  \n");
        return;
    }
    if(number == 1){
        int i = f1;
        for(i; i != r1; i = (i+1) % SIZE){
            printf("%d \n", red1[i]);
        }
        printf("%d \n", red1[i]);
    }
    if(number == 2){
        int i = f2;
        for(i; i != r2; i = (i+1) % SIZE){
            printf("%d \n", red2[i]);
        }
        printf("%d \n", red2[i]);
    }
}

int main(){
    for(int i = 2018; i<=11*2018; i+=2018){
        insert(i, 1);
    }
    int i ;
    printf("prvi pre prebacivanja: \n");
    display(1);
    for( i = f1; i != r1; i = (i+1) % SIZE){
        if(red1[i] % 6 == 0){
            insert(delete_red(1), 2);
        }
    }
    if(red1[i] % 6 == 0){
        insert(delete_red(1), 2);
    }
    printf("Prvi red: \n");
    display(1);
    printf("drugi red: \n");
    display(2);
}