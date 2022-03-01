#include <stdio.h>

void promenaZnaka(int a[], int l){
    int i;
    for(i=0; i<l; i+=2){
        a[i] = - a[i];
    }
}

int brojPazrnih (int a[], int l){
    int s=0;
    int i;
    for(i=1; i<l; i+=2){
        if(a[i] % 2 == 0){
            s++;
        }
    }
    return s;
}

int main(){
    int i, s,  niz[] = {
        2, 4, 8, 75, 37, 120, 113, 222, 10, 7, 18, 16, 23, 48, 29
    };
    int l = sizeof(niz) / sizeof(int);

    printf("\n");
    promenaZnaka(niz, l);
    for (i = 0; i< l; i++){
        printf("%d ", niz[i]);
    }
    s = brojPazrnih(niz, l);
    printf("Broj elementa sa parnim brojevima na neparnim indeksima: %d", s);
}