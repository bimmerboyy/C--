#include <stdio.h>
#include <stdlib.h>

int array[] = {6, 5, 4, 3, 2, 1, 7, 8, 0};

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(int start, int end){
    if(start >= end) return;
    int pivot = start;
    int i = start + 1;
    int j = end;
    while(i <= j){
        while(i <= end && array[i] <= array[pivot]) {
            i++;
        }
        while(j > start && array[j] >= array[pivot]){
            j--;
        }
        if(i > j){
           swap(&array[pivot], &array[j]);
        }
        else{
            swap(&array[i], &array[j]);
        }
    }
    quick_sort(start, j-1);
    quick_sort(j+1, end);
}


int main(){
    int n = sizeof(array)/sizeof(array[0]);
    quick_sort(0, n-1);
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}