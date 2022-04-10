// Implementacija reda
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int red[SIZE],f = -1,r = -1;

int isRedfull(){
    if(f == r+1 || f == 0 && r == SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isRedempty(){
    if(f == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void dodavanjeEluRed(int elem){
    if(isRedfull()){
        printf("Red je pun");
    }
    else{
    (r+1)%SIZE;
    red[r] = elem;
    }
    
}
int brisanjeElizReda(){
    if(isRedempty()){
        printf("Red je prazan");
        return -1;
    }
    if(f == r){
        f = r = -1;
    }
    else{
        int t;
        t = red[f];
        (f+1)%SIZE;
        return t;
    }
}
int display(){
    if(isRedempty()){
        return -1;
    }
    int i;
    for(i = f;i != r;(i+1)%SIZE){
        printf("%d",red[i]);
    }
}
int main(){
    int opcija,elem,i,s[SIZE];
    printf("1.Dodavanje elemenata 2.Brisanje elemenata 3.Display 4.Exit\n");
    printf("Unesite opciju:");
    scanf("%d", &opcija);
    do{
        switch(opcija){
            case 1:
            
            printf("Unesite element:");
            scanf("%d",&elem);
            break;
            case 2:
            elem = brisanjeElizReda();
            if(elem != -1){
                printf("Izbrisan je %d",elem);
            }
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exit");
            break;
            default:
            printf("Uneta je pogresna opcija");
            break;
        }

    }
    while(opcija != 4);
    return 0;
}