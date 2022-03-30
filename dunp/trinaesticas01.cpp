#include<iostream>
using namespace std;

class Fibonaci{
    private:
    int n;
    int *elementi;
    public:
    Fibonaci(){
        n = 5;
       
    }
    Fibonaci(int n){
        this->n = n;
         AlociranjeRacunanjElemenata();
    }
    Fibonaci(const Fibonaci &obj){
        n = obj.n;
        elementi = new int[n];
        for(int i = 0;i < n;i++){
            elementi[i] = obj.elementi[i];
        }
    }
    int Suma(){
        int s = 0;
        for(int i = 0;i < n;i++){
            s += elementi[i];
        }
        return s;
    }
    // hocu 5 elementi -> 0,1,2,3,4
    int Vrednost(int i){
        /*for(int j = 0;j<n;j++){
            if(j==i-1){
                return elementi[j];
                
            }
            */
            return elementi[i-1];
        
        }
         void Prosiri(int x){
        n += x;
        delete [] elementi;
         AlociranjeRacunanjElemenata();

    }
    void Ispis(){
        cout<<endl;
        cout<<"Elmenti Fibonacijevog niza su:"<<endl;
        for(int i = 0;i < n;i++){
            cout<<elementi[i]<<" ";
        }
    }
    private:
    void AlociranjeRacunanjElemenata(){
        elementi = new int [n];
        elementi[0] = 1;
        elementi[1] = 1;
        for(int i = 2;i < n;i++){
            elementi[i] = elementi[i-1]+elementi[i-2];
        }
    
    }
    };
   


int main(){
    Fibonaci f,f2(20);
    f.Ispis();
    f2.Ispis();
    f2.Prosiri(3);
    cout<<"22.element Fibonacijevog n                  "<<f2.Vrednost(22);
    Fibonaci f3(f2);
    f3.Ispis();
    return 0;
}