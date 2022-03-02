#include<stdio.h>
#include<iostream>
int main(){
    system("clear");
    int a = 5;
    int b = 10;
    int c = 3;
    int* p= &a;
    int** pp = &p;
    int*** ppp = &pp;
    printf("%d\n",&a); //adresa od a
    printf("%d\n",*p); //ispisuje ono sto se nalazi u a tj 5.
    printf("%d\n",p); //Ispisuje adrsu od a.
    printf("adresa var b:%d\n",&b);
    printf("adresa var a:%d\n",p);
    printf("adresa var b:%d\n", (p+1)); //pokazuje da adresu pre adrese a tj b
    printf("var b:%d",*(p+1)); //Vrednost od sledeceg elementa tj b
    printf("var a:%d\n",***ppp); // POkazuje na vrednost a.
  

   


    return 0;
    
}