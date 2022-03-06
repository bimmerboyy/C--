#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100 

int main(){
    int i, t, semafor=1;
    char recenica[MAX], recenica_bez_razmaka[MAX];
    printf("\n Unesite recenicu: "); 
    fgets(recenica, MAX, stdin);
    int poslednji_index = (int) strlen(recenica) - 1;
    t = 0;
    for(i=0; i<=poslednji_index; i++){
        if(!isspace(recenica[i])){
            recenica_bez_razmaka[t] = recenica[i];
            t++;
        }
    }
    poslednji_index = (int) strlen(recenica_bez_razmaka) - 1;
    t = poslednji_index;
    for(i=0; i<=t-i; i++){
        if(tolower(recenica_bez_razmaka[i]) !=  tolower(recenica_bez_razmaka[t-i])){
            semafor = 0;
        }
    }
    (semafor) ? printf("Rečenica je palindrom") : printf("Rečenica nije palindrom");
    return 0;
}