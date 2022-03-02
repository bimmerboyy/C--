

#include <cctype>
#include<iostream>
#include<string.h>
using namespace std;

void sortiranje(char rec[]){
    char pom;
    int i,j;
    int n = strlen(rec);
    for(i=0;i<=n;i++)
    for(j=i+1;j<n;j++)
    if(rec[i] > rec[j]){
        pom = rec[i];
        rec[i]= rec[j];
        rec[j] = pom;
    }

}
void provera(char prva[],char druga[]){
    
    sortiranje(prva);
    sortiranje(druga);
    int n1 = strlen(prva);
    int n2 = strlen(druga);
    if(n1 != n2)
    return 0;
    for(int i=0;i<n1;i++)
    if(tolower( prva[i])  != tolower(druga[i]))
    return 0;
return 1;

}

int main(){
    char prvaRec[20];
    char drugaRec[20];
    cout<<"Unesite prvu rec\n";
    cin>>prvaRec;
    cout<<"Unesite prvu druga\n";
    cin>>drugaRec;



}