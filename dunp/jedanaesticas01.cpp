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
#include <iostream>
#include<string.h>
using namespace std;
class Film{
    private:
    char naziv[15];
    int godinaSnimanja;
    char reziser[30];
    int *ocene;
    int brojOcena;
    int maksimalnoOcena;
    public:
    Film(char naziv[],char reziser[]){
        strcpy(this->naziv, naziv);
        strcpy(this->reziser, reziser);
        maksimalnoOcena = 10;
        ocene = new int[maksimalnoOcena];
        brojOcena = 0;
        godinaSnimanja = 2022;
    }
    Film(char naziv[],char reziser[],int ocene[],int brojOcena){
    strcpy(this->naziv, naziv);
    strcpy(this->reziser, reziser);
     this->brojOcena = brojOcena;
     maksimalnoOcena = brojOcena;
     maksimalnoOcena = brojOcena + 10;
     this->ocene = new int[maksimalnoOcena];
     for(int i = 0;i < brojOcena;i++){
        this->ocene[i] = ocene[i];
     }
     godinaSnimanja = 2021;

    }
    void dodajOcenu(int ocena){
        if(brojOcena < maksimalnoOcena){
        ocene[brojOcena] = ocena;
        brojOcena++;
        }
        else{
            cout<<"Nije moguce dodati ocenu, nema slobodnog mesta"<<endl;
        }
    }
    float prosek(){
        float s = 0,br,as;
        for(int i = 0; i < brojOcena;i++){
            s += ocene[i];
        }
        return s/brojOcena;
    }
    void ispis(){
        cout<<"Film "<<naziv<<" rezisera "<<reziser<<" snimljen"
        <<godinaSnimanja<<" ima prosecnu ocenu "<<prosek()<<endl;
    }
    void uporedi(Film f){
        if(prosek() > f.prosek()){
            cout<<"Film"<<this->naziv<<" ima bolju ocenu"<<endl;
        }
        else if(prosek() < f.prosek()){
                cout<<"Film "<<f.naziv<<" ima bolju ocenu"<<endl;
                
            }
        else{
                cout<<"Filmovi imaju istu prosecnu ocenu"<<endl;
            }
        

    }
    ~Film(){
        delete [] ocene;
    }
};
int main(){
    Film f("Paklene ulice 2","NN");
    int pomNiz[3] = {5,5,4};
    Film f2("Game of thrones","NN",pomNiz,3);
    f.dodajOcenu(4);
    f.dodajOcenu(3);
    f.dodajOcenu(3);
    f.dodajOcenu(4);
    f.ispis();
    f2.ispis();



}
