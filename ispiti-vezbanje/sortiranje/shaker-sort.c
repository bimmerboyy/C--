#include <stdio.h>
#include <stdlib.h>

void shaker_sort(int a[], int n) {
   int i, j, k;
   for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(a[j] < a[j-1]){
                a[j] = a[j] ^ a[j-1];
                a[j-1] = a[j] ^ a[j-1];
                a[j] = a[j] ^ a[j-1];
            }
        }
        n--;
        for(k = n-1; k > i; k--) {
            if(a[k] < a[k-1]){
                a[k] = a[k] ^ a[k-1];
                a[k-1] = a[k] ^ a[k-1];
                a[k] = a[k] ^ a[k-1];
            }
        }
   }
}

int main(){
    int array[6] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(array)/sizeof(array[0]);
    shaker_sort(array, n);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}