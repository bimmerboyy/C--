#include<stdio.h>

int main(){
    int i,n;
    printf("Uneiste n:");
    do{
        scanf("%d",&n);
    }
    while(n < 3);
    int niz[i];
    
    for(i=2;i<n;i++){
        
        niz[i] = niz[i-1] + niz[i-2];
    }
    for(i=0;i<n;i++){
        printf("%d",niz[i]);
    }
    return 0;
}