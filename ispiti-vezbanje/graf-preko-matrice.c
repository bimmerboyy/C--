#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void unos(int **matrix, int n){
    for(int i =  0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}


int main(){
    int i, j, n , matrix[MAX][MAX];
    printf("Unesite n: \n");
    scanf("%d", &n);
    
    for(int i =  0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }    
    return 0;
}