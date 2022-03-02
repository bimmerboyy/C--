#include<iostream>
#include<stdint.h>
int main(){
    system("clear");
    int duzina_niza = 5;
    int niz[duzina_niza];
    for(int i = 0; i < duzina_niza; i++){
        printf("Unesi element niza[%d]: ", i);
        scanf("%d", &niz[i]); 
    }
}