#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {3, 4, 7, 8, 1, 6};
    int l1 = sizeof(a) / sizeof(int); 
    int l2 = sizeof(b) / sizeof(int); 
    int i, j;
    for(i=0; i<l1; i++){
        for(j=0; j<l2; j++){
            if(a[i] == b[j]){
                printf(" %d ", a[i]);
            } 
        }    
    }
    return 0;
}