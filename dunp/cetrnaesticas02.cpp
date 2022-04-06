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
    void setO(char *d){ strcpy(datum,d);}
    char *getIP(){return ime_predmeta;}
    int getO(){return ocena;}
    char* getD(){return datum;}
};