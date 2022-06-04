#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int n){
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
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
    int array[6] = {5, 2, 4, 1, 3, 6};
    int n = sizeof(array)/sizeof(array[0]);
    selection_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}