/* kreirati klasu film 
klasa ima atribute:
 naizv, godine, godina snimanja, režiser, ocena, brojocena.
motode:
 konstruktor sa argumentom (naziv, reziser) ->
    godinu snimanja  postavlja na trenutnu godinu 2022,  broj ocena na 0;
 konsruktor sa argumentima (naziv, rezizer, ocena, brojocena )
    godinu snimanja stavlja na 2021
dodaj godinu - dodaje godinu az film
prosek - vraća prosečnu ocenu filma
ispis - ispisuje  podatke o filmu 
uporedi(film f) upoređuje treenutni film i film koji dolazi kaoo arguent  i ispisuje poruku koji film 
ima veću ocenu (ispisuje naizim fila koji ima bolju prosečnu ocenu)
*/
#include <iostream>
#include <string.h>

using namespace std;

class Film{
    private: 
        char naziv[15];
        int godinaSnimanja;
        char reziser[30];
        int *ocene;
        int brojocena;
        int maksimalnoOcena;
    public:
        Film(char naziv[], char reziser[]){
            strcpy(this->naziv, naziv);
            strcpy(this->reziser, reziser);
            maksimalnoOcena = 10;
            ocene = new int[maksimalnoOcena];
            brojocena = 0;
            godinaSnimanja = 2022;
        }
        Film(char naziv[], char reziser[], int ocene[], int brojocena){
            strcpy(this->naziv, naziv);
            strcpy(this->reziser, reziser);
            this->brojocena = brojocena;
            maksimalnoOcena = brojocena + 10;
            this->ocene = new int[maksimalnoOcena];
            for(int i = 0; i<brojocena; i++){
                this->ocene[i] = ocene[i];
            }
            godinaSnimanja = 2021;
        }
        void dodajOcenu(int ocena){
            if(brojOcena < maksimalnoOcena){
                ocene[brojocena] =  ocena;
                brojOcena++;
            }
            else{
                cout  << "nije moguće dodati ocenu,nema slobodnog mesta " <<endl;
            }
        }
        float prosek(){
            int s=0;
            for( int i = 0; i<brojOcena; i++){
                s+= ocene[i];
            }
            return (float) s / (float) brojOcena; 
        }
        void ispis(){
            cout <<"Film" << naziv  << " režiser" << reziser << " snimljen " << godinaSnimanja << " Godine ima prosečnu ocenu" << prosek()  <<endl;
        }
        void uporedi(Film f){
            if(prosek() > f.prosek()){
                cout "prvi je bolji";
            }
            else if(prosek() < f.prosek()){
                    cout << "drugi je bolji"
                }
            }
            else{
                cout <<  "isti su";
            }
        }
        ~Film(){
            delete [] ocene;
        }
};

int main(){
    Film f("Paklene ulice 2", "NN");
    int pomNiz[3]  = {5,4,4};
    Film f2("Game of thrones", "NN", pomNiz, 3);
    f.dodajOcenu(4);
    f.dodajOcenu(3);
    f.dodajOcenu(3);
    f.dodajOcenu(4);
    f.ispis();
    f2.ispis();
    f.uporedi(f2);
    return 0;
}