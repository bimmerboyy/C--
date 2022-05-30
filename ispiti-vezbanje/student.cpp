/* Primer klase Student, RedovanStudent i VandredniStudent RedovanStudent placa ukupnu 
skolarinu kao isvaki student 
VandrednStudent placa ukupnu skolarinu tako sto se doda jos odredjeni iznos
voditi spisak svih uplata do sada evidentiranih
ukupnaZaradafakulteta(Studenata *s)
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
    protected:
    string broj_indeksa;
    string ime;
    string prezime;
    public:
    Student(string broj_indeksa, string ime, string prezime, int skolarina = 100){
        this->broj_indeksa = broj_indeksa;
        this->ime =ime;
        this->prezime = prezime;
    }
    virtual int get_skolarina();
};

class RedovanStudent : public Student {
    protected:
    int skolarina;
    public:
    RedovanStudent(string broj_indeksa, string ime, string prezime) : Student(broj_indeksa, ime, prezime) {
        this->skolarina=100;
    }
    int get_skolarina() {
        return skolarina;
    }
};

class VanredniStudent : public Student {
    protected:
    int skolarina;
    public:
    VanredniStudent(string broj_indeksa, string ime, string prezime, int skolarina) : Student(broj_indeksa, ime, prezime) {
        this->skolarina = skolarina;
    }
    int get_skolarina() {
        return skolarina;
    }
};

int zaradaFakulteta(RedovanStudent *s, int broj_studenata){
    int ukupna_zarada = 0;
    for(int i = 0; i <broj_studenata; i++){
        ukupna_zarada += s[i].get_skolarina();
    }
    return ukupna_zarada;
}

int main(){
    VanredniStudent bahir("1", "bahir", "nukorvić", 600);
    RedovanStudent nikola("036016", "nkola", "matković");
    RedovanStudent tarik ("014", "tarik", "kučević");
    RedovanStudent studenti[2] =  {tarik, nikola};
    cout << zaradaFakulteta(studenti, 2);
    return 0;
}