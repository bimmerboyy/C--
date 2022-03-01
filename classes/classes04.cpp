#include<iostream>
using namespace std;
class geometrijski_oblik;

geometrijski_oblik *prvi = NULL;
geometrijski_oblik *zadnji=NULL;



class geometrijski_oblik{
        private:
         geometrijski_oblik *sledeci;
        protected:
        int *stranice,opseg;
        public:
        virtual void izracunaj_opseg() = 0;
        virtual void ispis() = 0;
        geometrijski_oblik(){ // Vezana lista je prazna
            cout << "U vezanu je ubacen novi geometrijski oblik.\n";
            sledeci=NULL;
            if(prvi == NULL){
                prvi=this;
            }
            else{
                zadnji->sledeci=this;
            }
            zadnji=this;
        }
        ~geometrijski_oblik(){
            cout<<"Oblik iizbrisan\n";
        }
        void ispis_vezane(){
            geometrijski_oblik *pom = this;
            while(pom){
                pom->ispis();
                pom=pom->sledeci;
            }
        }
        void brisanje_vezane(){
            geometrijski_oblik *pom = this;
            geometrijski_oblik *pom_brisanje;
            while(pom){
                pom_brisanje=pom;
                pom=pom->sledeci;
                delete pom_brisanje;
               
            }

        }
};

class kvadrat:public geometrijski_oblik{
    
    public:
    kvadrat(){
        stranice = new int;
        cout << "Stvoren je novi kvadrat.\nUnesite stranicu a:";
        cin >> stranice[0];
        izracunaj_opseg();
       
    }
      void izracuna_opseg(){
        opseg=stranice[0]*4;
    }
     void ispis(){
            cout << "Kvadrat\nStranica a:"<< stranice[0] <<"Opseg:"<<opseg<<endl;
        }
   
  
};
class pravougaonik:public geometrijski_oblik{
    public:
    pravougaonik(){
        stranice= new int[2];
         cout << "Stvoren je novi prvougaonik.\nUnesite stranicu a:\nUnesite stranicu b:";
        cin >> stranice[0] >> stranice[1];
        izracunaj_opseg();
        
    }
      void izracunaj_opseg(){
        opseg = stranice[0] * 2 + stranice[1] * 2;
    }

    void ispis(){
        cout << "Pravougaonik\nStranica a:"<< stranice[0] <<"\n" << "Starnica b:"<<stranice[1] <<"Opseg:"<<opseg<<endl;
        }
    
  
};
int main(){
    char odabir;
    geometrijski_oblik *novi;
    while(odabir != 'x'){
        system("clear");
        cout<<"1 - novi kvadrat\n2 - novi pravougaonik\n - ispisi vezanu listu\n - izbrisi vezanu listu\nx - ugasi program\nOdabir: ";
        cin >> odabir;
        switch(odabir){
            case '1':{
               novi=new kvadrat;
                break;
            }
            case '2':{
                novi=new pravougaonik;
           
            break;

            }
           
        }
        cout << "ENTER za nastavak... ";
        cin.ignore();
        cin.get();
    }
    return 0;
   

}