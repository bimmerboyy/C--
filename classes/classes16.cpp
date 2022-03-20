/*
Kreurti klasu film 
Klasa ima tribute: naziv,,godina_snimanj,rezsier,ocene,broj ocena,maksimalno ocena
Metode: konstruktor sa argummentima[naziv,reziser] -> godinu snimanja
ostavlja na trenustnu godinu 2022, broj ocena na 0
konsruktor sa argumentom (naziv,reziser,ocene,borj ocena) -> godinu
snimanja postvalja na 2021
dodajOcenu -> dodaju ocenu za film
prosek -> varca prosecnu ocenu filma
ispis -> ispisuje podatke o filmu 
uporedi (film f) -> uporedjuje trenutni film i film koji dolazi kao
argument i ispisuje poruku koji film ima vecu ocenu.(ispisuje naziv
filma koji ima bolju prosecun ocenu)
destruktor -> oslobadaj memoriju
*/

#include<iostream>
#include<string.h>
using namespace std;

class Film{
    public:
    string naziv,reziser;
    int godinaSnimanja,brojOcena,maksimalnoOcena;
    int *ocene;
    
    Film(string n,string r){
        naziv = n;
        reziser = r;
        ocene = new int[maksimalnoOcena];
        maksimalnoOcena = 10;
        brojOcena = 0;
        godinaSnimanja = 2022;
    }
    Film(string n,string r,int ocene[],int brojOcena){
        naziv = n;
        reziser = r;
        godinaSnimanja = 2021;
        this->brojOcena = maksimalnoOcena;
        maksimalnoOcena = brojOcena;
        maksimalnoOcena = brojOcena + 10;
        this->ocene = new int[maksimalnoOcena];
        for(int i = 0;i < brojOcena;i++){
            this->ocene[i] = ocene[i]; 
        }
        
    }
    void dodajOcenu(int ocena){
        if(brojOcena < maksimalnoOcena){
            ocene[brojOcena] = ocena;
            brojOcena++;
        }
    }
    int prosek(){
        int as,s = 0;
        for(int i = 0;i < brojOcena;i++){
            s += ocene[i];
        }
        as = s/brojOcena;
        return as;
    }
    void ispis(){
        cout<<"Naziv filma:"<<naziv<<endl<<"Reziser:"<<reziser<<endl<<"Godina snimanja:"<<godinaSnimanja<<endl
        <<"Prosek ocena:"<<prosek()<<endl;
    }
    void uporedi(Film f){
        if(prosek() > f.prosek()){
            cout<<"Film"<<this->naziv<<"ima bolju prosecnu ocenu"<<endl;
        }
        if(prosek() < f.prosek()){
            cout<<"Film"<<f.naziv<<"ima bolju prosecnu ocenu"<<endl;
        }

    }
    ~Film(){
        delete [] ocene;

    }
};

int main(){
    Film f("Fast and Furious","NN");
    Film f2("Transformers","NN");
    f.dodajOcenu(7);
    f.dodajOcenu(4);
    f.dodajOcenu(3);
    f.dodajOcenu(5);
    f.dodajOcenu(1);
    f.dodajOcenu(6);
    f2.dodajOcenu(3);
    f2.dodajOcenu(7);
    f2.dodajOcenu(2);
    f.ispis();
    f2.ispis();

    
    
}