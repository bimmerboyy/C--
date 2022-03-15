#include <iostream>
#include <string.h>

using namespace std;
class Covek {       
  public:
    string ime, prezime, pol;
    int godine;
    float  visina, tezina;
    Covek(string x, string y, string z, int g, float v, float t){
      ime = x;
      prezime = y;
      pol = z;
      visina = v;
      tezina = t;
      godine = g;
    }
    void predstaviSe(){
      string padezZaGodine;
      if(godine > 10 && godine < 20){
        padezZaGodine = "godina";
      }
      else{
        int temp = godine % 10;
        switch (temp){
          case 0: case 5: case 6: case 7: case 8: case 9:
            padezZaGodine = "godina";
            break;
          case 1:
            padezZaGodine = "godinu";
            break;
          case 2: case 3: case 4: 
            padezZaGodine = "godine";
            break;
          default: 
            "godina";
            break;
        }
      }
      cout <<"ja se zovem "<<ime<<" " << prezime <<", imam " << godine <<" " << padezZaGodine <<" Visok sam "  << visina  << " cm i imam " << tezina <<" Kg" <<endl;
    }
    void starenje(int g){
      godine += g;
    }
};


int main() {
  Covek tarik("Tarik", "Kučević", "Muško",19, 191, 100);
  Covek nikola("Nikola", "Matković", "Muško",19, 168, 60);
  tarik.predstaviSe();
  nikola.predstaviSe();
  nikola.starenje(2);
  nikola.predstaviSe();
  return 0;
}