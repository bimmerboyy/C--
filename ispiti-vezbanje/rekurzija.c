#include <stdio.h>

int a = 5;

void funkcija(){
    a++;
    printf("%d \n", a );
    if(a == 20){
        printf("Ušao sam u if");
        return;
    }
    funkcija();
    printf("I dalje sam tu \n");
    funkcija();

}


int main(){
    funkcija();

    return 0;
}