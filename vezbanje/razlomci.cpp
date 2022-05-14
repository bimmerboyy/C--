// /*Realizovati klasu Razlomak koja ima dva privatna atributa broj,imen-celobrojnog tipa i metode: 
// konstruktor sa argumentima (a,b), set i get metode, ispis()
//  u formatu broj/imen, preklopiti operatore +, * skalarom, =, ++ prefiksni, ++(int) postfiksni,-, <<,  >>.

// Rešenje je slično prethodnom primeru pa ćemo objasniti samo nova 2 operatora koja smo dodali a to us << i >>.
// Ove operatore koristimo da ne bismo morali da pozivamo: Ako imamo Razlomak r i želimo da ga ispišemo da to radimo r.ispis()
// ili cout<<r.getbroj()<<“/”<<r.getimen()<<endl;
// Već želimo da napišemo samo kao:  cout<<r<<endl;
// */
#include <iostream>

using namespace std;

class Razlomak{
    private:
    int brojilac;
    int imenilac;
    public:
    Razlomak(int a = 1, int b = 1){
        brojilac = a;
        imenilac = b;
    }
    int get_brojilac(){
        return brojilac;
    }
    int get_imenilac(){
        return imenilac;
    }
    void set_brojilac(int a){
        brojilac = a;
    }
    void set_imenilac(int b){
        imenilac = b;
    }
    void ispis(){
        if(brojilac == imenilac){
            cout << brojilac;
            return;
        } 
        cout << brojilac << " / " << imenilac <<endl;
    }
    friend ostream&  operator<<(ostream& COUT,Razlomak& r1){
        if(r1.brojilac == r1.imenilac){
            COUT << r1.brojilac << endl;
            return COUT;
        } 
        COUT << r1.brojilac << " / " << r1.imenilac << endl;
        return COUT;
    }
    Razlomak operator +(Razlomak r2){
        Razlomak r1 = *this;
        if(r1.imenilac == r2.imenilac){
            r1.brojilac += r2.brojilac;
        }
        else{
            int NZS = nadji_najmanji_zajednicki_sadrzalac(r1.imenilac, r2.imenilac);
            r1.brojilac *= NZS / r1.imenilac;
            r2.brojilac *= NZS / r2.imenilac;
            r1.brojilac += r2.brojilac;
            r1.imenilac = NZS;
        }
        return r1;
    }
    Razlomak operator -(Razlomak r2){
        Razlomak r1 = *this;
        if(r1.imenilac == r2.imenilac){
            r1.brojilac -= r2.brojilac;
        }
        else{
            int NZS = nadji_najmanji_zajednicki_sadrzalac(r1.imenilac, r2.imenilac);
            r1.brojilac *= NZS / r2.imenilac;
            r2.brojilac *= NZS / r1.imenilac;
            r1.brojilac -= r2.brojilac; 
            r1.imenilac = NZS;
        }
        return r1;
    }
    Razlomak operator -(){
        Razlomak r1 = *this;
        r1.brojilac = -brojilac;
        r1.imenilac = imenilac;
        return r1;
    }
    Razlomak operator *(Razlomak r2){
        Razlomak r1 = *this;
        r1.imenilac *= r2.imenilac;
        r1.brojilac *= r2.brojilac;
        return r1;
    }
    Razlomak operator *(int a){
        Razlomak r1 = *this;
        Razlomak r2(a, 1);
        return r1 * r2; 
    }
    Razlomak operator /(Razlomak r2){
        Razlomak r1 = *this;
        r1.imenilac *= r2.brojilac;
        r1.brojilac *= r2.imenilac;
        return r1;
        // razlomak r3(r2.imenilac, r2.brojilac) 
        // return *this * r3; 
    }
    Razlomak operator /(int a){
        Razlomak r1 = *this;
        Razlomak r2(1, a);
        return r1 * r2; 
    }
    void operator ++(int){
       brojilac += imenilac;
    }
    void operator ++(){
       brojilac += imenilac;
    }
    void operator --(int){
       brojilac -= imenilac;
    }
    void operator --(){
       brojilac -= imenilac;
    }
    int nadji_najmanji_zajednicki_sadrzalac(int a, int b){
        if(a % b == 0) return a;
        if(b % a == 0) return b;
        int NZS = (a > b) ? a  : b;
        while(1){
            if(NZS % a == 0 && NZS % b == 0){
                break;
            }
            NZS++;
        }
        return NZS;
    }
};
int main(){
    Razlomak r1(5,8);
    Razlomak r2(1,3);
    Razlomak r3 = r1 + r2;
    Razlomak r4 = -r3;
    r1++;
    ++r1;
    --r1;
    r1--;
    Razlomak r5 = r1 / r2;
    cout << r5;
    return 0;
}