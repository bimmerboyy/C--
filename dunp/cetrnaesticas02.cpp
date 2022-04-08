#include<iostream>
#include<math.h>
#include <string>
#include<string.h>
using namespace std;

class Ocena{
    char ime_predmeta[15];
    int ocena;
    char datum[10];
    public:
    Ocena(){
        strcpy(ime_predmeta, "OOP1");
        ocena = 9;
        strcpy(datum,"6.5.2022");
    }
    Ocena(char *ip,int o,char *d){
          strcpy(ime_predmeta,ip);
          ocena = o;
          strcpy(datum, d); 
    }
    bool jeLiPOlozio(){
        if(ocena == 5)
        return false;
        else return true;
    }
    void ispis(){
        cout<<"I predmeta "<<ime_predmeta<<" student je "<<datum<<" dobio ocenu "<<ocena<<endl;
    }
    void setIP(char *ip){ strcpy(ime_predmeta,ip);}
    void setO(int o){ ocena = (o > 5 && o < 11) ? o : 5;}
    void setD(char *d){ strcpy(datum,d);}
    char *getIP(){return ime_predmeta;}
    int getO(){return ocena;}
    char* getD(){return datum;}
};
class Student{
    char ime_prezime[30];
    char broj_indeksa[10];
    Ocena ocena1,ocena2,ocena3;
    public:
    Student(){
        strcpy(ime_prezime, "Ela curic");
        strcpy(broj_indeksa, "036-010/21");
        ocena1.setIP("OOP1");
        ocena2.setIP("Osnovi racunarstva");
        ocena2.setD("19.1.2022");
        ocena2.setO(7);
        ocena3.setIP("Osnovi programiranja");
        ocena3.setD("5.4.2022");
        ocena3.setO(6);
    }
        
        Student(char *ip,char *bi,Ocena o1,Ocena o2,Ocena o3){
        strcpy(ime_prezime,ip);
        strcpy(broj_indeksa, bi);
        ocena1.setIP(o1.getIP());
        ocena1.setD(o1.getD());
        ocena1.setO(o1.getO());
        ocena2.setIP(o2.getIP());
        ocena2.setD(o2.getD());
        ocena2.setO(o2.getO());
        ocena3.setIP(o3.getIP());
        ocena3.setD(o3.getD());
        ocena3.setO(o3.getO());
    }
    int ukupnoPolozenih(){
        int br = 0;
        if(ocena1.jeLiPOlozio())
        br++;
        if(ocena2.jeLiPOlozio())
        br++;
        br = (ocena3.jeLiPOlozio()) ? br+1 : br;
        return br;
    }
    float prosek(){
        int suma = 0;
        if(ocena1.jeLiPOlozio())
            suma += ocena1.getO();
        if(ocena2.jeLiPOlozio())
            suma += ocena2.getO();
        if(ocena3.jeLiPOlozio())
            suma += ocena3.getO();
        return (float) suma / ukupnoPolozenih();
    }
    void ispis(){
        cout<<"Student "<<ime_prezime<<" sa brojem indeksa "<<broj_indeksa<<" ima ocene "<<endl;
        ocena1.ispis();
        ocena2.ispis();
        ocena3.ispis();
    }
};
int main(){
    Student ela;
    ela.ispis();
    cout<<"Student je polozio "<<ela.ukupnoPolozenih()<<" predmeta"<<endl;
    cout<<"Prosek studenta je "<<ela.prosek()<<endl;
    return 0;
}