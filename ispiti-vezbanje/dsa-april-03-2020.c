/*Napisati program koji tezinski graf pamti kao matricu susedstva.Obezbediti funkciju za unos matrice susedstva
Nakon unosa matrice program treba da ispise koje grane cini taj graf i granu najvece tezine 
(npr. grana izmedju cvora 1 i 2  tezine 5) */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

void unos(int matrix[SIZE][SIZE],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
        
    }
}
void ispis(int matrix[SIZE][SIZE],int n){
    int maks = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d -> %d = %d\n",i,j,matrix[i][j]);
            if(maks < matrix[i][j]){
                maks = matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Grana najvece tezine je:%d",maks);
}

int main(){
    int n,matrix[SIZE][SIZE];
    printf("Unesite n:");
    scanf("%d",&n);
    unos(matrix,n);
    ispis(matrix, n);

    return 0;
}