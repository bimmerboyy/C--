#include <stdio.h>

int main(){
    int i, n;
    printf("unesite  n: ");
    scanf("%d", &n);
    int b[n], c[n], a[n*2];
    //unos
    printf("\nunesite b: ");
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    printf("\nunesite c: ");
    for(i = 0; i < n; i++){
        scanf("%d", &c[i]);
    }
    //
    int index = 0;
    for(i = 0; i<n; i++){
        a[index++] = b[i];
        a[index++] = c[i];
    }
    for(i = 0; i < n*2; i++){
        printf("%d ", a[i]);
    }
    return 0;
}