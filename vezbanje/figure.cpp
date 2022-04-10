#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

bool zauzeto(int x, int y);
void ispis_table();
void pomeri(int x1, int y1, int x2, int y2);
void postavi_boje_polja();
void eat();
bool razlicita_boja(int x, int y, bool boja);

int temp_index = 0;
bool tabla[9][9]; //jer se u pravom šahu starta od 1
bool ima_figuru; 
char c;

class figura{
    public:
    bool boja; //bele fiugre su true!
    int x; 
    int y;
    string vrsta;
    figura(int x, int y, bool boja, string vrsta){
        this->x = x;
        this->y=y;
        this->boja=boja;
        this->vrsta = vrsta;
    }
    void info(){
        cout << "Ovo je " << this->vrsta << " na poziciji x: " << x <<" y: " <<y;
        (boja) ? cout << " Bele boje" : cout << " crne boje"; 
        cout <<endl;
    }
    bool canEat(const figura &f){
        return true;
    }
    void pomeri(int x, int y){
        if(!zauzeto(x, y)){
            this->x = x;
            this->y = y;
            return;
        }
        else if(zauzeto(x, y) && razlicita_boja(x, y, this->boja)){
            eat();
            this->x = x;
            this->y = y;
            return;
        }
        cout << "Polje je zauzeto!" << endl ; 
    }
};

figura f1(1, 2, 1, "pesak");
    figura f2(2, 2, 1, "pesak");
    figura f3(3, 2, 1, "pesak");
    figura f4(4, 2, 1, "pesak");
    figura f5(5, 2, 1, "pesak");
    figura f6(6, 2, 1, "pesak");
    figura f7(7, 2, 1, "pesak");
    figura f8(8, 2, 1, "pesak");
    figura f9(1, 1, 1, "top");
    figura f10(2, 1, 1, "skakac");
    figura f11(3, 1, 1, "lovac");
    figura f12(4, 1, 1, "dama");
    figura f13(5, 1, 1, "kralj");
    figura f14(6, 1, 1, "lovac");
    figura f15(7, 1, 1, "skakac");
    figura f16(8, 1, 1, "top");
    //crni
    figura f17(1, 7, 0, "pesak");
    figura f18(2, 7, 0, "pesak");
    figura f19(3, 7, 0, "pesak");
    figura f20(4, 7, 0, "pesak");
    figura f21(5, 7, 0, "pesak");
    figura f22(6, 7, 0, "pesak");
    figura f23(7, 7, 0, "pesak");
    figura f24(8, 7, 0, "pesak");
    figura f25(1, 8, 0, "top");
    figura f26(2, 8, 0, "skakac");
    figura f27(3, 8, 0, "lovac");
    figura f28(4, 8, 0, "dama");
    figura f29(5, 8, 0, "kralj");
    figura f30(6, 8, 0, "lovac");
    figura f31(7, 8, 0, "skakac");
    figura f32(8, 8, 0, "top");
    figura figure[32] = {f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32};
    


void ispis_table(){
    for(int i=8; i>=1; i--){
        for(int j=1; j<=8; j++){
            ima_figuru = false;
            for(int k = 0; k<32; k++){
                if(figure[k].x == j && figure[k].y == i){ 
                    ima_figuru = true;           
                    if(figure[k].vrsta == "pesak"){
                        c = 'P';
                    }
                    if(figure[k].vrsta == "top"){
                        c = 'T';
                    }
                    if(figure[k].vrsta == "skakac"){
                        c = 'S';
                    }
                    if(figure[k].vrsta == "lovac"){
                        c = 'L';
                    }
                    if(figure[k].vrsta == "dama"){
                        c = 'D';
                    }
                    if(figure[k].vrsta == "kralj"){
                        c = 'K';
                    }
                    //crni su mala slova, beli velika.
                    if(figure[k].boja){
                        cout << c << " ";
                    }
                    else{
                        c = tolower(c);
                        cout << c << " ";
                    }
                }
            }
            if(!ima_figuru){
                if(tabla[i][j]){
                    cout << "  ";
                }
                else{
                    cout << "# ";
                }
            }
        }
        cout <<endl;
    }
}

bool zauzeto(int x, int y){
    ima_figuru = false;
    for(int k = 0; k<32; k++){
        if(figure[k].x == x && figure[k].y == y){
            temp_index = k;
            return true;
        }
    }
    return false;
}

void pomeri(int x1, int y1, int x2, int y2){
    if(zauzeto(x1, y1)){
        figure[temp_index].pomeri(x2, y2);
    }
    else{
        cout << "Nisam pronašao figuru" << endl;
    }
}

void postavi_boje_polja(){
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            if( (i+j)  % 2 == 0){
                tabla[i][j] = false;
            }
            else{
                tabla[i][j] = true;
            }
        }
    }
}

bool razlicita_boja(int x, int y, bool boja){
    for(int k = 0; k<32; k++){
        if(figure[k].x == x && figure[k].y == y){
            return figure[k].boja != boja;
        }
    }
    return false;
}

void eat(){
    figure[temp_index].x = 0;
    figure[temp_index].y = 0;
}

int main(){ 
    postavi_boje_polja();
    int x1, x2, y1, y2;
    ispis_table();
    while(1){
        cin >> x1 >> y1 >> x2 >> y2 ;
        system("clear");
        pomeri(x1, y1, x2, y2); 
        ispis_table();
    }
}