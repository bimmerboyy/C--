#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[], int n){
for (int i = 0 ; i < n - 1; i++){
    for (int j = 0 ; j < n - i - 1; j++){
      if (array[j] > array[j+1]){
        array[j] = array[j] ^ array[j+1];
        array[j+1] = array[j] ^ array[j+1];
        array[j] = array[j] ^ array[j+1];
      }
    }
  }
}

int main(){
    int array[6] = {5, 2, 4, 1, 3, 6};
    int n = sizeof(array)/sizeof(array[0]);
    bubble_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}