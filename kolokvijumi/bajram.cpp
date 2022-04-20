//Postoji baza podataka za niz dece  koja idu u školu sa atributima ime, prezime, veroispovest.
//ako je dete musliman, treba da dobije poklon za bajram,
//ostali treba da dobiju poklon za božić.
//proći kroz niz učenika, i izbrojati koliko poklona treba podeliti za božić, a koliko za bajram.
//uzeti u obzir da je 80% dece islamske veroispovesti, pa zato koristiiti continue....
#include <iostream>
#include <string>

using namespace std;

class Ucenik{
    private:
    static int broj_poklona_za_bajram;
    static int broj_poklona_za_bozic;
    int const ukupan_broj_poklona = 35;
    string ime;
    string prezime;
    string veroispovest;
    public:
    Ucenik(string i, string p, string v){
        ime = i;
        prezime = p;
        veroispovest = v;
    }
    string getV(){
        return veroispovest; 
    }
    void operator ++(int){
        broj_poklona_za_bajram++;
        broj_poklona_za_bozic = ukupan_broj_poklona - broj_poklona_za_bajram;
    }
    static void ispis_broja_poklona(){
        cout << "za bajram treba podeliti " << broj_poklona_za_bajram << " poklona, a za božić " << broj_poklona_za_bozic  <<endl;
    }
};

int Ucenik::broj_poklona_za_bajram = 0;
int Ucenik::broj_poklona_za_bozic = 0;

int main(){
    Ucenik u1("Aldin", "Mekić", "musliman"), 
    u2("Aldin", "Ugljanin", "musliman"),
    u3 ("Alma", "Biševac", "muslimanka"),
    u4 ("Amina", "Memišahović", "muslimanka"),
    u5 ("Amina", "Omerović", "muslimanka"),
    u6("Ammar", "Crnišanin", "musliman"),
    u7("Bahir", "Nurković", "balija"),
    u8("Benjamin", "Ramović", "musliman"),
    u9("Dina", "Bećirović", "muslimanka"),
    u10("Ela", "Curić", "astrolog"),
    u11("Elmedin", "Doljanac", "musliman"),
    u12("Elmedin", "Doljanac", "musliman"),
    u13("Emin", "volejbolmen", "musliman"),
    u14("Emin", "volejbolmen", "musliman"),
    u15("Enesa", "Gudžević", "muslimanka"),
    u16("Erten", "png", "musliman"),
    u17("husein", "Škrijelj", "musliman"),
    u18("Ihsan", "curic", "musliman"),
    u19("Ilma", "Emrović", "muslimanka"),
    u20("Kemal", "Šaćirović", "musliman"),
    u21("Marina", "Gobeljic", "pravoslavka"),
    u22("Mihajlo", "patričević", "pravoslavac"),
    u23("Nebojša", "Glišović", "pravoslavac"),
    u24("Omer", "Biševac", "musliman"),
    u25("Orhan", "Zukorlić", "musliman"),
    u26("Osman", "jejna", "musliman"),
    u27("Rejhan", "habibović", "musliman"),
    u28("selman", "Gračanin", "musliman"),
    u29("Suad", "bondžuk", "musliman"),
    u30("sulejman", "hoćanin", "musliman"),
    u31("Tarik", "Kučević", "musliman"),
    u32("Tarik", "žirčanin", "musliman"),
    u33("Tarik", "Kaltak", "musliman"),
    u34("Tina", "Vučković", "pravoslaka"),
    u35("Nikola", "Matković", "pravoslavac");
    Ucenik ucenici[35] = {u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, u12, u13, u14, u15, u16, u17, u18, u19, u20, u21, u22, u23, u24, u25, u26, u27, u28, u29, u30, u31, u32, u33, u34, u35};
    //int ukupan_broj_poklona = 35, broj_poklona_za_bajram = 0, broj_poklona_za_bozic = 0; 
    for(int i = 0; i<35; i++){
        if(ucenici[i].getV() != "musliman" && ucenici[i].getV() != "muslimanka" ){
            continue;
        }
        ucenici[i]++;
    }
    Ucenik::ispis_broja_poklona();
    return 0;
}