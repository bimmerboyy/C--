#include <stdio.h>
#include <stdlib.h>

void shell_sort(int arr[], int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i++){
            int temp = arr[i];
            int j = i;           
            while(j >= gap && arr[j - gap] > temp ){
                arr[j] = arr[j - gap];
                j -= gap;
            }             
            arr[j] = temp;
        }
    }
}

int main(){
    int array[6] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(array)/sizeof(array[0]);
    shell_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}