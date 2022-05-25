#include<iostream>
#define SIZE 5
using namespace std;


// Lupetanje 


class QuickSort{
    private:
    int n;
    int *niz[SIZE];
    public:
    QuickSort(int n){
        this->n = n;
        *niz = new int[n];
    }
    void unos(){
        int i;
        for(i = 0; i < n; i++){
            cin >> *niz[i];
        }
    }
    void ispisPre(){
      
        cout<<"Niz pre quick sorta:"<<endl;
        for(int i = 0; i < n; i++){
            cout<<" "<<niz[i]<<endl;
        }
    }


//     }
//     int brziSort(){
//     int f,l,j,pivot = 0;
//     pivot = niz[f];
//     i = f;
//     j = l;
//     while(i < j){
//     do{
//         i++;
//     }
//     while(niz[i] <= pivot);

//     do{
//         j--;
//     }
//     while(niz[j] <= pivot);

//     if(i < j){
//         niz[i] = niz[i] ^ niz[j];
//         niz[j] = niz[i] ^ niz[j];
//         niz[i] = niz[i] ^ niz[j];
//     }
//     }
// }
~QuickSort(){
    delete [] *niz;
}

};
int main(){
    QuickSort q1(5);
    q1.unos();
    q1.ispisPre();




  
   // cout<<endl<<"Niz posle quick sorta"<<endl;

    
    
    // f = 0;
    // l = n-1;
    // cout<<"Unesite pivot:";
    // cin>>pivot;


    // for(i = 0;i < n;i++){
    //     for(j = l;j > pivot;j--){
    //         if(niz[pivot] > niz[j]){
    //             niz[pivot] = niz[pivot] ^ niz[j];
    //             niz[j] = niz[pivot] ^ niz[j];
    //             niz[pivot] = niz[pivot] ^ niz[j];
    //         }
    //     }
    // }


    return 0;
}