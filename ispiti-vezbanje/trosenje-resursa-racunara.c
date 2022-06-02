#include<stdio.h>

int main(){

    int i;
    unsigned int n = 0;
    int niz[n];

    while(1){
        n+=10000000000;
        for(i = 0; i < n; i++){
            niz[i] = i;
            printf("%d",niz[i]);
        }
       
    }
    return 0;
}