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
    printf(" Grane koje imaju vezu su: \n");
    int max = matrix[0][0];
    for(int i =  0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j]  != 0){
                printf("Grana %d ima vezu sa granom %d, težina je %d \n", i, j, matrix[i][j]);
                if(matrix[i][j]>max){
                    max = matrix[i][j];
                }
            }
        }
    }
    printf("najveća težina je : %d \n", max);;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return 0;
}