#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int n){
    for (int i = 0; i < n; i++){
        int min = i;
        for (int j = i + 1; j < n ; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        if (min != i){
            array[i] = array[i] ^ array[min];
            array[min] = array[i] ^ array[min];
            array[i] = array[i] ^ array[min];
        }
    }
}

int main(){
    int array[] = {6, 5, 4, 3, 2, 1, 7, 8, 0};
    int n = sizeof(array)/sizeof(array[0]);
    selection_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}