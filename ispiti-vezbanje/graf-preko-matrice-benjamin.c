#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void unos(int *mat,int n){
    int i,j;
    printf("Unesite elemente matrice:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        scanf("%d",&mat[i][j]);
    }
}
int main(int argc, charargv[]) {
    int i,j;
    int m[SIZE][SIZE],  br;
    printf("Unesite broj elemenata:\n");
    scanf("%d",&br);
    unos(&m,br);

    int max = m[0][0];
    printf("Grane koje cine graf:\n");
    for(i=0;i<br;i++){
        for(j=0;j<br;j++){
            if(i * j != 0)
            printf("Grana %d - %d",i,j);
        }
    }
    return 0;
}