#include  <stdio.h>

#define max 100

int main(){
    int n, i, niz[max];
    niz = {1, 2, 3, 8, 9, 12};
    printf("unesite novi elemente: ");
    scanf("%d", &n);
    int l = sizeof(niz) / sizeof(int);
    int index = 0;
    for(i = 0; i < l; i++){
        if(niz[i]>n){
            index = i;
            break;
        }
    }
    printf("index na kom treba da bude broj %d  je %d", n, index);
}