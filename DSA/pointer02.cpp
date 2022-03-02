#include <iostream>
#include <stdint.h>
#include <system_error>
int oduzimanje(int* x, int* y){
    *x = *x - *y;
    return *x;
}
int main(){
    system("clear");
    int x=4;
    int y=2;
    printf("Prije funkcije:%d\n",x);
    oduzimanje(&x, &y);
    printf("Posle funkcije:%d\n",x);
    return 0;
}