#include <stdio.h>

#define MAX 10

int main(){
    int a = 7056;
    int i;
    for(i = MAX; i > 0; i--){
        if(a % i == 6){
            printf("%d", i);
        }
    }

    return 0;

}