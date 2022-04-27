// Od klase studnt (ime, prezime, smer, ocene) napraviti 4 objekta, naći studenta sa najvećim prosekom, i ispisati stuente 
//softverskog inženjersta

#include <iostream>
#include <string.h>

using namespace std;

#define MAX 20

class Student {
    public:
    string  firstName, lastName, smer;
    int *ocene;
    Student(string fN, string lN, string s){
        firstName = fN;
        lastName = lN;
        smer = s;
        ocene = new int[MAX];
        
    }
    float prosek(){
        int s = 0;
        int l = sizeof(ocene) / sizeof(int);
        for(int i = 0; i < l; i++){
            s += ocene[i];
        }
        float as = (float) s / (float) l;
        return as;
    }
};

int main(){
    Student student1("Nikola", "Matković", "SI");
    Student student2("Tarik", "KUčević", "SI");
    Student studnet3("Ermin", "Paljević", "RT");
    Student student4("Hamza", "Murtezić", "Biologija");
    Student studenti[4] = {student1, student2, student3, student4};
    int najveciProsek = 0;
    string najbolji; 
    for (int i = 0; i<4; i++){
        if(studenti[i].prosek() > najveciProsek){
            najveciProsek = studenti[i].prosek();
            najbolji = studenti[i];
        }
    }
}