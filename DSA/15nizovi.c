#include <stdio.h>

int main(){
    int i, n, s = 0;
    printf("unesite  n: ");
    scanf("%d", &n);
    int a[n], b[n];
    //unos
    printf("\nunesite a: ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nunesite b: ");
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    //
    for(i = 0; i<n; i++){
        s += a[i] * b[n-1-i];
    }
    printf("suma proizvoda elemenata je :  %d", s);
    return 0;
}