#include <iostream> 
#include <string.h>

#define max 100

void sortiranje(char rec[]){
    char pom;
    int i, j;
    int n = strlen(rec);
    for(i = 0; i<n-1; i++){
        for(j = 1;j<n; j++ ){
            if(rec[i] > rec[j]){
                pom = rec[i];
                rec[i] = rec[j];
                rec[j] = pom;
            }
        }
    }
}
int provera(char prva[], char[druga]){
    sortiranje(prva);
    sortiranje(druga);
    int n1 = strlen(prva);
    int n2 = strlen(druga);
    if(n1 != n2){
        return 0;
    }
    for(int i = 0; i<n1; i++){
        if(prva[i] != druga[i]){
            return 0;
        }
    }
    return 1;
}

int provera(char rec1[], char rec2[], int l)  
{  
    printf("test");
    return 1;  
}  
int main ()  
{
    char niz1[max], niz2[max];  
    int provera;  
    printf ("Unesite prvu reč: \n ");  
    scanf (" %s", niz1);        
    printf ("Unesite drugu reč \n ");  
    scanf (" %s", niz2);  
    int d1, d2, z = 0;
    (provera(prva, druga)) ? cout <<"Stringovi su anagrami" :  cout <<"stringovi nisu anagrami";
    return 0;  
}  
  
  

