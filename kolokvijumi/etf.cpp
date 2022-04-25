#include <iostream>
#include <string>
using namespace std;
class Vocka {
    public:
    Vocka(string n, int zv, double gp){
        this->naziv = n;
        this->zivVek = zv;
        this->godPriho = gp;
        this->starost  = 0;
    }
    double dohvGodPrihod() const {
        return godPrihod;
    }
    int dohvPreostalo() const {
        return zivVek - starost;
    }
    Vocka operator++(int){
        Vocka v = *this;
        starost++; return v;
    }
    friend ostream& operator<<(ostream& os, constVocka& v){
        return os << v.naziv << '(' << v.starost<< '/' << v.zivVek << "): " << v.godPrihod;
    }
    private:
    string naziv; int zivVek;
    int starost; double godPrihod;
};

class Vocnjak {
public:
    Vocnjak(int m, int n);
    Vocnjak(const Vocnjak& p){
        kopiraj(p); 
    }
 Vocnjak(Vocnjak&& p) { premesti(p); }
 ~Vocnjak() { brisi(); }
 Vocnjak& operator=(const Vocnjak& p) {
 if (this != &p) { brisi(); kopiraj(p); }
 return *this;}
 Vocnjak& operator=(Vocnjak&& p) {
 if (this != &p) { brisi(); premesti(p); }
 return *this;}
 int dohvId() const { return id; }
 Vocnjak& operator+=(const Vocka&);
 Vocnjak operator++(int);
 double prihod() const;
 friend bool operator<(const Vocnjak& p1, const
 Vocnjak& p2){return p1.prihod()<p2.prihod();}
 friend ostream& operator<<(ostream& os, const
 Vocnjak& p);
private:
 void kopiraj(const Vocnjak&);
 void premesti(Vocnjak& p) { mat = p.mat;
 brRed = p.brRed; brKol = p.brKol;
 p.mat = nullptr; p.brKol = p.brRed = 0;}
 void brisi();
 static int posId; int id = ++posId;
 int brRed, brKol; Vocka*** mat;
};
Vocnjak::Vocnjak(int m, int n):brRed(m),brKol(n){
 mat = new Vocka**[brRed];
 for (int i = 0; i < brRed; i++){
 mat[i] = new Vocka*[brKol];
for (int j = 0; j < brKol; j++)
 mat[i][j] = nullptr;}}
Vocnjak& Vocnjak::operator+=(const Vocka &v){
 for (int i = 0; i < brRed; i++)
 for (int j = 0; j < brKol; j++)
 if (!mat[i][j]){ mat[i][j] = new Vocka(v);
 return *this;} return *this;}
Vocnjak Vocnjak::operator++(int){
 Vocnjak v = *this;
 for (int i = 0; i < brRed; i++)
 for (int j = 0; j < brKol; j++)
 if (mat[i][j]){ (*(mat[i][j]))++;
 if (mat[i][j]->dohvPreostalo() <= 0){
 delete mat[i][j]; mat[i][j] = nullptr;}}
 return v;}
double Vocnjak::prihod() const{
 double broj = 0;
 for (int i = 0; i < brRed; i++)
 for (int j = 0; j < brKol; j++)
 if (mat[i][j])
 broj += mat[i][j]->dohvGodPrihod();
 return broj;}
void Vocnjak::kopiraj(const Vocnjak &p){
 brRed = p.brRed; brKol = p.brKol;
 mat = new Vocka**[brRed];
 for (int i = 0; i < brRed; i++) {
 mat[i] = new Vocka*[brKol];
 for (int j = 0; j < brKol; j++)
 mat[i][j] = p.mat[i][j] ?
 new Vocka(*p.mat[i][j]) : nullptr;}}
void Vocnjak::brisi(){
 for (int i = 0; i < brRed; i++) {
 for (int j = 0; j < brKol; j++) {
 delete mat[i][j];}
 delete [] mat[i];}
 delete [] mat; mat = nullptr;}
ostream& operator<<(ostream& os, const
 Vocnjak& p){
 os << "V_" << p.id << ':' << p.prihod() <<endl;
 for (int i = 0; i < p.brRed; i++) {
 for (int j = 0; j < p.brKol; j++)
 if(p.mat[i][j])os << *(p.mat[i][j]) <<'\t';
 else os << "prazan_red" << '\t';
 os << endl;}
 return os;}
int Vocnjak::posId = 0;
class Plantaza {
public:
 Plantaza() = default;
 Plantaza(const Plantaza&) = delete;
 Plantaza& operator=(const Plantaza&) = delete;
 ~Plantaza();
 Plantaza& operator+=(Vocnjak &v) {
 posl = (!prvi ? prvi : posl->sled)
 = new Elem(v); return *this;}
 void operator()(int k) const;
private:
 struct Elem {
 Vocnjak* voc; Elem* sled;
 Elem(Vocnjak& v) :voc(&v), sled(nullptr) {}
 };
 Elem* prvi = nullptr, *posl = nullptr;
};
Plantaza::~Plantaza(){
 while(prvi) {Elem* stari=prvi; prvi=prvi->sled;
 delete stari;} posl = nullptr;}
void Plantaza::operator()(int k) const {
 if(prvi){
 for (int i = 0; i < k; i++) {
 double max=0; int id = prvi->voc->dohvId();
 for (Elem* tek = prvi; tek; tek=tek->sled){
 Vocnjak* cpy = new Vocnjak(*tek->voc);
 for (int j= 0; j < i; j++)(*cpy)++;
 if (max<cpy->prihod()){max=cpy->prihod();
 id = tek->voc->dohvId();}
 delete cpy;}
 cout << i+1 <<". "<< id << ':' << max
 << endl;}}}
 int main() {
Vocka v1("Jabuka", 4, 10);
 Vocka v2("Kruska", 3, 22);
 Vocka v3("Visnja", 2, 25);
 Vocnjak voc(2, 2); voc += v1;
 Vocnjak vocCpy(voc); vocCpy += v3; voc += v2;
 cout << voc << endl << vocCpy << endl;
 Plantaza pred; (pred += voc) += vocCpy;
 pred(3); return 0;
}