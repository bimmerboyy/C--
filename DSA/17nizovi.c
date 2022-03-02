/*Primer 17. Napisati program kojim se na osnovu niza a[1], a[2], …, a[2*n]
formiraju nizovi b[1], b[2], …, b[n] i c[1], c[2], …, c[n] čiji su elementi redom
jednaki: a[1], a[3], …, a[2*n-1] i a[1], a[4], …, a[2*n] 
*/
#include <stdio.h>

//a - svi
//b - sa parnim indeksom
//c - sa neparnim indexom


int main(){
    int i, n;
    printf("unesite  n: ");
    scanf("%d", &n);
    int b[n], c[n], a[n*2];
    //unos
    printf("\nunesite a: ");
    for(i = 0; i < n*2; i++){
        scanf("%d", &a[i]);
    }
    //za parne:
    for(i = 0; i<n*2; i+=2){
        b[i/2] = a[i];
    }
    for(i = 1; i<n*2; i+=2){
        c[i/2] = a[i];
    }
    //ispis
    printf("\n");
    for(i = 0; i < n*2; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        printf("%d ", c[i]);
    }
    return 0;
}