/*Realizovati klasu Razlomak koja ima dva privatna atributa broj,imen-celobrojnog tipa
 i metode: konstruktor sa argumentima (a,b), set i get metode, ispis() u formatu broj/imen,
  preklopiti operatore +, * skalarom, =, ++ prefiksni, ++(int) postfiksni,-, <<,  >>.
 */

#include<iostream>

class Razlomak{
    private:
    int brojilac;
    int imenilac;
    public:
    Razlomak(){
        brojilac = 1;
        imenilac = 2;
    }
    Razlomak(int b,int i){
        brojilac = b;
        imenilac = i;
    }
    void setI(int i){
        imenilac = i;
    }
    void setB(int b){
        brojilac = b;
    }
    int getB(){
        return brojilac;
    }
    int getI(){
        return imenilac;
    }
};

int main(){

    return 0;
}
