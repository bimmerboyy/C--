#include<stdio.h>
# define SIZE 100

int f = -1;
int r = -1;
int red[SIZE];

void insert_r(int elem){
    if(f == r+1 % SIZE){
        return;
    }
    if(r == -1){
        f = r = 0;
        red[r] = elem;
        return;
    }
    r = (r+1)%SIZE;  
    red[r] = elem;
}
void insert_f(int elem){
    if(f == (r+1)%SIZE){
        return;

    }
    if(r == -1){
        f = r = 0;
        red[f] = elem;
      return;  
    }
    f = (f + SIZE-1)%SIZE;
    red[f] = elem;


}
int delete_r(){
    int elem;
    if(r == -1){
        printf("Red je prazan");
        return -1;
    }
    else if(f == r){
        elem = red[r];
        f = -1;
        r = -1;
    }
    else{
        elem = red[r];
        r = (r + SIZE-1)%SIZE;
    }
    return elem;
}
int delete_f(){
    int elem;
    if(f == -1){
        printf("Red je prazan");
    }
    else if(f == r){
        elem = red[f];
        
    }
}