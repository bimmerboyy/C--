#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 1;
    int *q;
    q = (int*)malloc(sizeof(int));
    *q = 1;
    printf("p pre brisanja = %d\n",*p);
    free(p);
    printf("p posle brisanja = %n\n",p);
    p = q;
    q = (int*)malloc(sizeof(int));
    *q = 3;
    printf("p = %d, q = %d\n", *p, *q);

    return 0;
}