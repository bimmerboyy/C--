#include <stdio.h>
#include <stdlib.h>

/* function to sort arr using shellSort */
int shellSort(int arr[], int n){
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2){
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted
        for (int i = gap; i < n; i += 1){
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];
            // shift earlier gap-sorted elements up until the correct
            // location for a[i] is found
            int j = i;           
            while(j >= gap && arr[j - gap] > temp ){
                arr[j] = arr[j - gap];
                j -= gap
            }             
            //  put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
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