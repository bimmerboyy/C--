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
    

}