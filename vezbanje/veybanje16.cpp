#include<stdio.h>
int main(){
    int i,n;
    printf("Unesite n:");
    scanf("%d",&n);
    int niz[n];
    while(1){
        for(i = 0;i < n;i++){
        niz[i] = i;
        
    }
    printf("Niz je:");
    for(i = 0;i < n;i++){
        printf("%d",niz[i]);
    }
}

    
  
}