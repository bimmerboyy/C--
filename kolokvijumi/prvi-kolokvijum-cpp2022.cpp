/*Potrebno je kreirati aplikaciju za deljenje znanja putem razmene članaka među korisnicima. Izdvojene
su sledeće funkcionalnosti. Na osnovu datih klasa implementirati opisane funkcionalnosti sistema. Po
potrebi dopuniti klase novim atributima i/ili metodama.

1.  Kreirati klasu Vreme koja ima atribute sati, minuti i sekunde i metode: konstruktor bez argumenata,
    konstruktor sa 3 argumenta (sati, minuti i sekunde), konstruktor sa 2 argumenta (sati i minuti), 
    Info sa argumentom tipa bool koji određuje da li će vreme biti ispisano u punom format (hh:mm:ss)
    ili u skraćenom formatu (hh:mm), Add koja kao rezultat vraća novi objekat tipa vreme koji predstavlja 
    sumu vremena posleđenog kao parametar i instance this,
    Add koja kao rezultat vraća novi objekat tipa vreme koji predstavlja sumu parametra izraženog u minutama
    i vremena instance this, 
    Compare To koja vraća vrednost tipa int u zavisnosti od toga da li je vreme instance this pre, 
    jednako ili posle vremena proslijeđenog kao parameter
    (-1 - vreme instance this nastupa pre vremena v2,
    0 - vreme instance this je jednako vremenu v2,
    1 - vreme instance this nastupa nakon vremena v2). (10 poena) 
2.  Klasa Datum ima dan, mesec i godinu. Potrebne konstruktore za ispravan rad, destruktore i
    metodu za ispis. (5 poena)
3.  Klasa Korisnik ima puno ime koje mora imati najviše 30 karaktera, 
    korisnicko ime može imati najviše 20 karaktera, lozinku (promenljive dužine) i tip korisnika
    (administrator ili gost). 
    Potrebne konstruktore za ispravan rad, destruktore i metodu za ispis.
    Metodu za promenu lozinke gde se šalju kao parametri stara i nova lozinka. 
    Samo ako je stara lozinka ispravno poslata može se promeniti na novu lozinku u suprotnom ispisati
    poruku o grešci. (10 poena)
4.  Klasa Komentar ima tekst promenljive dužine, datum, vreme, popularnost 
    (ceo broj koji označava koliko je komentar popularan),
    korisnik koji je autor komentara.
    Potrebne konstruktore za ispravan rad, 
    destruktore i metodu za ispis.
    Metodu za povećanje popularnosti komentara za +1.
    (5 poena)
5.  Klasa Clanak ima naslov od najviše 50 karaktera,
    sadržaj promenljive dužine, datum, vreme, broj pregleda, tagovi (niz stringova),
    oblast niz od 100 karaktera,
    korisnik koji je autor clanka,
    niz komentara koji je članak dobio koji je promenljive dužine, 
    potrebene konsturkotre  za ispravan rad, destruktore i metodu za ispis.
    Metoda za dodavanje novog taga.
    Clanke mogu dodavati svi članovi nebitno da li su oni administratori ili gosti.
    korisnici aplikacije koji su gositi takođe mogu ostaviti komentar na određeni članak
    administratori ne mogu ostavljati komentar.
    Kreirati metodu za promenu sadržaja i vremena promene članka
    kao verifikaciju  dozvole potrebno je prodslediti korisničko ime autora članka. 
    samo kreator članka ima permisiju da menja njegov sadržaj (20 poena)
*/
#include <iostream>
#include <string>

using namespace std;

enum Tip {ADMINISTRATOR, GOST};

class Vreme{
    private:
    int sati;
    int minuti;
    int sekunde;
    public:
    Vreme(){
        sati = 1;
        minuti = 0;
        sekunde = 0;
    }
    Vreme(int h, int m, int s){
        sati = h;
        minuti = m;
        sekunde = s;
    }
    Vreme(int h, int m){
        sati = h;
        minuti = m;
        sekunde = 0;
    }
    Vreme(const Vreme &v1){
        this->sati = v1.get_sati();
        this->minuti = v1.get_minuti();
        this->sekunde = v1.get_sekunde();
    }
    void info(bool pun_format){
        if(sati>=10){
            cout << sati << ":";
        }
        else{
            cout << "0" << sati << ":";
        }
        if(minuti>=10){
            cout << minuti;
        }
        else{
            cout << "0" << minuti;
        }
        if(format){
            if(sekunde>=10){
                cout  << ":" << sekunde;
            }
            else{
                cout << "0" << sekunde;
            }
        }
        cout <<endl;
    }
    int get_sati(){
        return sati;
    }
    int get_minuti(){
        return minuti;
    }
    int get_sekunde(){
        return sekunde;
    }
    Vreme add(const Vreme &v1){
        int temp_h;
        int temp_m;
        int temp_s;
        temp_h = v1.get_sati() + this-> sati;
        temp_m = v1.get_minuti() + this-> minuti;
        temp_s = v1.get_sekunde() + this-> sekunde;
        if(temp_s >= 60){
            minuti++;
            sekunde -= 60;
        }
        if(temp_m >= 60){
            sati++;
            minuti -= 60;
        }
        Vreme  novo_vreme(temp_h, temp_m, temp_s);
        return novo_vreme;
    }
    Vreme add(int min){
        int  temp_m;
        int temp_h = this->sati;
        temp_m = this->minuti + min;
        if(temp_m >= 60){
            temp_h += temp_m / 60;
            temp_m %= 60;            
        }
        Vreme novo_vreme(temp_h, temp_m, this->sekunde);
    }
    int compare_to(const Vreme &v1){
        if(this->sati > v1.get_sati()  ||
            this->sati == v1.get_sati() && this-> minuti > v1.get_minuti ||
            this -> sati == v1.get_sati() && this-> minut == v1.get_minuti() && this->sekunde > v1.get_sekunde()
        ){
            return 1;
        }
        else if(this -> sati == v1.get_sati() && this-> minut == v1.get_minuti() && this->sekunde == v1.get_sekunde()){
            return 0;
        }
        return -1;
    }
};

class Datum{
    private:
    int dan;
    int mesec;
    int godina; 
    public:
    Datum(){
        dan = 1;
        mesec = 1;
        godina = 2022;
    }
    Datum(int dan, int mesec, int godina){
        this->dan = dan;
        this->mesec = mesec;
        this->godina = godina;
    }
    Datum(const Datum &d1){
        this->dan = d1.get_dan();
        this->mesec = d1.get_mesec();
        this->godina = d1.get_godina();
    }
    ~Datum(){
        delete dan;
        delete mesec;
        delete godina;
    }
    int get_dan(){
        return dan;
    }
    int get_godina(){
        return godina;
    }
    int get_mesec(){
        return mesec;
    }
    void ispis(){
        if(dan >= 10){
            cout << dan;
        }
        else{
            cout << "0" << dan;
        }
        cout << "/";
        if(mesec >= 10){
            cout <<  mesec;
        }
        else{
            cout << "0" << mesec;
        }
        cout <<"/"<< godina << endl;
    }
};

class Korisnik{
    private:
    char puno_ime[30]; 
    char korisnicko_ime[20];
    string lozinka;
    Tip tip;
    public:
    Korisnik(){
        puno_ime = "anonymous vegan";
        korisnicko_ime = "bimmerboyy";
        lozinka = "123456";
        tip = GOST;

    }
    Korisnik(char *puno_ime, char *korisnicko_ime, string lozinka, Tip t1 ){
        this->puno_ime  = puno_ime;
        this->korisnicko_ime = korisnicko_ime;
        this->lozinka = lozinka;
        this->tip = t1;
    }
    Korisnik(const Korinsik &k1){
        this->puno_ime = k1.get_puno_ime();
        this->korisnicko_ime = k1.get_korisnicko_ime();
        this->lozinka = k1.get_lozinka();
        this->tip = k1.get_tip();
    }
    char *get_puno_ime(){
        return this->puno_ime;
    }
    char *get_korisnicko_ime(){
        return this->korisnicko_ime;
    }
    string get_lozinka(){
        return this->lozinka;
    }
    Tip get_tip(){
        return this->tip;
    }
    void ispis(){
        cout << "Korinsik " << puno_ime << "(@" <<korisnicko_ime << ") ima ovlašćenje " << nadji_tip();
    }
    string nadji_tip(Tip t){ 
        switch(t){
            case ADMINISTRATOR:
                return "administrator";
            case GOST:
                return "gost";
        }
        return "greška";
    }
    void promeni_lozinku(string stara, string nova){
        if(stara == lozinka){
            lozinka = nova;
        }
        else{
            cout << "Greška prilikom menjanja lozinke.";
        }
    }
    ~Korisnik{
        delete puno_ime;
        delete korisnicko_ime;
        delete lozinka;
        delete tip;
    }
};

class Komentar{
    private:
    string tekst;
    Datum datum; 
    Vreme vreme;
    Korisnik korisnik;
    int popularnost = 0;
    public:
    Komentar(string tekst, Vreme v1, Datum d1, Korisnik k1, int popularnost){
        this->tekst = tekst;
        this->vreme = v1;
        this->datum = d1;
        this->korisnik = k1;
        this->popularnost = popularnost; 
    }
    void povecanje_popularnosti(){
        popularnost++;
    }
    void ispis(){
        cout << tekst << endl << "Objavio korisnik: " ;
        korisnik.ispis();
        cout << ", ";
        datum.ispis();
        cout  << " u ";
        vreme.ispis();
        cout "Komentar ima popularnost : " << popularnost;
    }
    ~Komentar(){
        delete tekst;
        delete datum;
        delete vreme;
        delete korisnik;
        delete popularnost;
    }
}

int main(){
    Vreme v1(12, 0, 0);
    Datum d1(1,11, 2002); 
    Vreme v2(13, 45, 50);
    Vreme v4(15, 00);
    Vreme v5();
    Datum d2(12,8, 2002);
    datum d3(9, 1, 2003);
    korisnik k1("Nikola Makotović", "anonymousvegan", "123", ADMINISTRATOR);
    korisnik k2("Tarik Kučević", "bimmerboyy", "555", GOST);
    korisnik k3("Marko Petroivć", "mp050303", "999", ADMINISTRATOR);
    komentar kom1("Dobar ahahhahaha", v1, d1, k1, 10);
    komentar kom2("Ne valja", v2, d2, k2, 0);
    komentar kom3("Nije nešto ", v3, d3, k3, 3);
    kom3.ispis();
    return 0;
}