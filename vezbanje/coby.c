#include <stdio.h>
#include <stdlib.h>

#define MAX  2048
void main(){
    char temp[MAX];
    FILE *dat;
     if ((dat1 = fopen("cobijevfajl.txt", "r")) == NULL){
        printf("Greška prilikom otvaranja datoteke ");
        exit(1);
    }
     while(1){
        if(feof(dat)){
            break;
        }
        printf("%s", fgets(dat));
    }
}
