/*Primer 18. Napisati program kojim se realizuje ciklično premeštanje vrednosti
elemenata niza a[1], a[2], …, a[n] za m mesta ulevo.*/

#include <stdio.h>

int main() {
    int n, i, m, t, j;
    printf("Unesite n: ");
    scanf("%d", &n);
    int niz[n];
    printf("Unesite niz");
    for(i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }
    printf("Unesite m: ");
    scanf("%d", &m);
    //алгоритам за циклично померање јендом:
    for(j=0; j<m; j++){ 
        for(i=0; i<n; i++){
            if(i==0){
                t = niz[n-1];
                niz[n-1] = niz[i];
            }
            else{
                niz[i-1] = niz[i];    
            }
        }
        niz[n-2] = t;
    }
    //ispis
    for(i = 0; i < n; i++){
        printf("%d", niz[i]);
    }
}