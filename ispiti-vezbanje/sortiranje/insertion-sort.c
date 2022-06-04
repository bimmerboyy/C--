#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int n){
    for (int i = 1 ; i < n ; i++){
        int j = i;
        while (j > 0 && array[j-1] > array[j]){
            array[j-1] = array[j] ^ array[j-1];
            array[j] = array[j] ^ array[j-1];
            array[j-1] = array[j] ^ array[j-1];
            j--;
        }
    }
}

int main(){
    int array[6] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(array)/sizeof(array[0]);
    insertion_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}