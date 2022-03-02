#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int* niz = (int*)malloc(sizeof (int * 20));
    *niz = 5;
    *(niz + 1) = 10;
    *(niz + 2) = 20;
    printf("%d\n", *niz);
    printf("%d\n",*(niz+1));
    printf("%d",*(niz+2));
    return 0;

}