#include <stdio.h>

int brojPromeneZnakova(int *a, int l){
    int i, s=0;
    for(i = 0; i < l-1; i++){
        if(*(a+i) * *(a+i+1) < 0){
            s++;
        }
    }
    return s;
}

int main(){
    int i, s,  niz[] = {
        2, 4, -8, -75, -37, 120, -113, 222, -10, -7, -18, 16, 23, -48, -29
    };
    int l = sizeof(niz) / sizeof(int);

    printf("\n");
    s = brojPromeneZnakova(niz, l);
    printf("\nBroj broj promene znaka: %d", s);
}