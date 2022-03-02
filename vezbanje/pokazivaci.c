#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    int b = 10; 
    int* pa = &a;
    printf("Memorijska adresa od a je: %lld Što možemo dobiti i preko pokazivača: %p ", (long long int) &a, pa);
    printf("\n vrednost promenljive koja se nalazi na lokaciji pokazivača p1 je : %d \n", *pa);
    *(pa+1) = 16; //b = 16;
    printf("Sada je  b = %d", b);
    //
    printf("krećmo sada ozbiljnoooo \n \n \n");
    //::::::::::::::::::::::::::::::::::::::::
    int* niz = (int*)malloc(sizeof(int));
    int i = 0, j;
    int broj;
    do{
        scanf("%d", &broj);
        niz = (int*)realloc(niz, (i+1)*sizeof(int));
        *(niz+i) = broj;
        i++;
    }while(broj !=0);
    //
    printf("Ispis niza");
    for(int j = 0; j<i; j++){
        printf("%d \n", *(niz+j));
    }
    free(niz);
    return 0;
}