/*Realizovati klasu Razlomak koja ima dva privatna atributa broj,imen-celobrojnog tipa
 i metode: konstruktor sa argumentima (a,b), set i get metode, ispis() u formatu broj/imen,
  preklopiti operatore +, * skalarom, =, ++ prefiksni, ++(int) postfiksni,-, <<,  >>.
 */

#include<iostream>

using namespace std;

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
    float skracivanjeRazlomaka(){
        int skraceniRazlomak;
        if(brojilac % 2 == 0 && imenilac % 2 == 0  && brojilac > imenilac){
            skraceniRazlomak = brojilac / imenilac;
            return skraceniRazlomak;
        }
        if(brojilac % 2 == 0 && imenilac % 2 == 0 && brojilac < imenilac){
           if(imenilac % brojilac == 0){
                imenilac = imenilac/brojilac;
            }
            else{
                imenilac = imenilac / 2;
            }
            brojilac = brojilac/brojilac;
            
            cout<<brojilac<<"/"<<imenilac<<endl; 
           
            // skraceniRazlomak = brojilac / imenilac; 
            // return (float)skraceniRazlomak;
        }
        if(brojilac % 3 == 0 && imenilac % 3 == 0 && brojilac > imenilac){
            skraceniRazlomak = brojilac / imenilac;
            return skraceniRazlomak;
        }
        if(brojilac % 3 == 0 && imenilac % 3 == 0 && brojilac < imenilac){
            if(imenilac % brojilac == 0){
                imenilac = imenilac/brojilac;
            }
            else{
                imenilac = imenilac / 3;
            }
            brojilac = brojilac/brojilac;
            
            cout<<brojilac<<"/"<<imenilac<<endl;
            return 1;
          //  skraceniRazlomak = (float) brojilac/imenilac;
            //return (float)skraceniRazlomak;
        }
        if(brojilac == imenilac || brojilac % imenilac == 0){
            skraceniRazlomak = brojilac/imenilac;
            return skraceniRazlomak;
        }
        if(imenilac % brojilac == 0 && brojilac < imenilac){
            imenilac = imenilac / brojilac;
            brojilac = brojilac / brojilac;
            cout<<brojilac<<"/"<<imenilac<<endl;
            return 1;
        }
         if(brojilac % 2 != 0 && imenilac % 2 != 0  && brojilac % 3 != 0 && imenilac % 3 != 0){
            cout<<"Razlomak se ne moze skratiti"<<endl;
            return 0;
        }
        if(brojilac % 3 == 0 && imenilac % 2 == 0 || brojilac % 2 == 0 && imenilac % 3 == 0 || brojilac % 2 == 0 && imenilac % 2 != 0 || brojilac % 2 != 0 && imenilac % 2 ==0){
            cout<<"Razlomak se ne moze skratiti"<<endl;
            return 0;
        }
        //return skraceniRazlomak;
        
    }
    void ispis(){
        if(skracivanjeRazlomaka()){
            cout<<skracivanjeRazlomaka();
        }
        else{
            cout<<brojilac<<"/"<<imenilac<<endl;
        }
       
    }
};

int main(){
    Razlomak r1(4,8);
    r1.skracivanjeRazlomaka();
    r1.ispis();

    return 0;
}
