// Klasa Student (indeks,ime,prezime,ocene,studijsk progtam)
//metode: inacijalizacija(...),prosek() -> vraca prosek
// studenata,brpolozenih(), dodajocenu(ocena), oslobodi()

#include<iostream>
#include<string.h>
#include <type_traits>
using namespace std;
class Student{
    private:
    char imeprezime[35],studijskiprogram[15];
    int *ocene, brocena;
    public:
    void inacijalizacija(char *ip, char *sp);
    float prosek();
    int brpolozenih();
    void dodajocenu(int ocena);
    void ispis();
    void osloodi();
    
};
void Student::inacijalizacija(char *ip, char *sp){
    strcpy(imeprezime, ip);
    strcpy(studijskiprogram, sp);
    brocena = 0;

}
float Student::prosek(){
    float s = 0;
    int br;
    for(int i=0;i<brocena;i++){
        if(ocene[i] > 5 && ocene[i] <= 10){
            s += ocene[i];
            br++;
        }
    }
    return s/br;
}
int Student::brpolozenih(){
    int br = 0;
    for(int i = 0; i < brocena;i++){
        if(ocene[i] > 5 && ocene[i] <= 10){
            br++;
        }
    }
    return br;
}
void Student::dodajocenu(int ocena){
    /*
    [7 6 5 10 8 ocena]
    brocena = 5;
    brocena = 6;
    */
    int *pom = new int[brocena];
    int i;
    for(i = 0;i < brocena;i++)
    pom[i] = ocene[i];
    delete []ocene;
    brocena++;
    ocene = new int[brocena];
    for(i = 0;i < brocena;i++)
    ocene[i] = pom[i];
    ocene[brocena -1] = ocena;
    delete []pom;

}
void Student::ispis(){
    cout<<"Student: "<<imeprezime<<" koji studira "<<studijskiprogram<<
    "ima prosek"<<prosek()<<"polozio je"<<brpolozenih()<<"ispita\n";

}
void Student::osloodi(){
    delete [] ocene;
}
int main(){
    Student s;
    s.inacijalizacija("Aldin Mekic", "soft.inz");
    s.dodajocenu(9);
    s.dodajocenu(10);
    s.dodajocenu(5);
    s.dodajocenu(9);

    s.ispis();

    s.osloodi();
    return 0;
}