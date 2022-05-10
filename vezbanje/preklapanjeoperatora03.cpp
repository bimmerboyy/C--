/*Realizovati klasu Razlomak koja ima dva privatna atributa broj,imen-celobrojnog tipa i 
metode: konstruktor sa argumentima (a,b), set i get metode, ispis()
 u formatu broj/imen, preklopiti operatore +, * skalarom, =, ++ prefiksni
 , ++(int) postfiksni,-, <<,  >>.

Pokušajte sami da uradite pa onda pogledajte rešenje.
Rešenje je slično prethodnom primeru pa ćemo objasniti 
samo nova 2 operatora koja smo dodali a to us << i >>. 
Ove operatore koristimo da ne bismo morali da pozivamo: 
Ako imamo Razlomak r i želimo da ga ispišemo da to radimo
 r.ispis() ili cout<<r.getbroj()<<“/”<<r.getimen()<<endl;
Već želimo da napišemo samo kao:  cout<<r<<endl;

*/

#include<iostream>

using namespace std;

class Razlomak{
    private:
    int brojilac;
    int imenilac;
    public:
    Razlomak(int a,int b){
        brojilac = a;
        imenilac = b;
    }
    void setI(int b){
        imenilac = b;
    }
    void setB(int a){
        brojilac = a;
    }
    int getB(){
        return brojilac;
    }
    int getI(){
        return imenilac;
    }
    void ispis(){
        cout<<"Brojilac:"<<getB()<<endl<<"Imenilac"<<getI()<<endl;
    }

    void skracivanjeRazlomaka(){
        if(imenilac > brojilac){
            for(int i = brojilac;i > 1;i--){
                if(brojilac % i == 0 && imenilac % i == 0){
                    
                }
            }
        }
    }
    Razlomak operator+(Razlomak &r1){
        
    }
};

int main(){

    return 0;
}