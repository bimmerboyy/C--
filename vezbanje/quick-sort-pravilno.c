#include<stdio.h>
#include<stdlib.h>
#include<time.h>

  void swap(int *x, int *y){
      *x = *x ^ *y;
      *y = *x ^ *y;
      *x = *x ^ *y;
  }
  int podela(int niz[], int pocetakNiza,int krajNiza){
      int pivot = pocetakNiza + (rand() & (pocetakNiza - krajNiza));
      int vrednostPivota = niz[krajNiza];
      int i = pocetakNiza;
      for(int j = pocetakNiza; j < krajNiza; j++){
          if(niz[j] <= vrednostPivota){
              swap(&niz[i], &niz[j]);
              i++;
          }
      }
      swap(&niz[i],&niz[krajNiza]);
      return i;
  }
  void QuickSortRekurzija(int niz[], int pocetakNiza,int krajNiza){
      if(pocetakNiza < krajNiza){
    int pivot = podela(niz,pocetakNiza,krajNiza);
    QuickSortRekurzija(niz,pocetakNiza,pivot-1);
    QuickSortRekurzija(niz,pivot+1,krajNiza);
      }
   
  }
void QuickSort(int niz[], int n){
    srand(time(NULL));
        QuickSortRekurzija(niz,0,n-1);
    }
int main(){
    int niz[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
    int n = 13;

    QuickSort(niz,n);

    for(int i = 0;i < n;i++){
        printf("%d ",niz[i]);
    }

    return 0;
}