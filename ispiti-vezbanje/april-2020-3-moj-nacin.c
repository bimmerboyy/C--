//Tarik Kucevic

#include <stdlib.h>
#include <stdio.h>

#define MAX 20

void unos(int matrix[MAX][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ispis(int matrix[MAX][MAX], int n){
    int max = matrix[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] != 0){
                printf("%d -> %d (%d) \n", i , j,  matrix[i][j]);
                if(matrix[i][j] > max){
                    max = matrix[i][j];
                }
            }
        }
        printf("\n");
    }
    printf("Najteža grana je %d", max);
}

int main() {
    int matrix[MAX][MAX];
    int n;
    printf("Unesite n: \n");
    scanf("%d", &n);
    unos(matrix,  n);
    ispis(matrix, n);
    return 0;
}