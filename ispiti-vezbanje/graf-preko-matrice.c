#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void unos(int matrix[MAX][MAX], int n){
    for(int i =  0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ispis(int matrix[MAX][MAX], int n){
    for(int i =  0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j, n;
    printf("Unesite n: \n");
    scanf("%d", &n);
    int matrix[MAX][MAX]; 
    unos(matrix, n);
    ispis(matrix, n);
    
    return 0;
}