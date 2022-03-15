#include<iostream>
using namespace std;
void zamena(int *a, int *b){
    int pom;
    pom = *a;
    *a = *b;
    *b = pom;
}
void zamena(int &a, int &b){
    int pom;
    pom = a;
    a = b;
    b = pom;
}
int main(){
    int a = 5,b =10;
    //int *pa = &a,*pb = &b;
    int &ra = a,&rb = b;
    zamena(ra,rb);
    //zamena(pa,pb);
    cout<<"a = "<<a<<" b = "<<b<<"\n";
    return 0;
}