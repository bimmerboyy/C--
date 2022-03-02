#include <stdio.h>

int provera(int *a, int l){
    int i, f = 1; 
    for(i = 0; i < l-1; i++){
        if(*(a+i) + *(a+i+1) != 1){
            return 0;
        }
    }
    return 1;
}

int main(){
    int i, f,  niz[] = {
        1, 0, 0, 1, 0, 1
    };
    int l = sizeof(niz) / sizeof(int);

    printf("\n");
    f = provera(niz, l);
    if(f){
        printf("Sve ok");
    }
    else{
        printf("nije");
    }
}