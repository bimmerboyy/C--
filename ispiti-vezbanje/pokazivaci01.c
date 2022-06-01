#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = (int*)malloc(sizeof(int));
    *p = 1;
   int *q;
   
   q = p;
   printf("q = %n, p = %n\n",q,p);
   printf("p = %d, q = %d",*p,*q);


    return 0;

}