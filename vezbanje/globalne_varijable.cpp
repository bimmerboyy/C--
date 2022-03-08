#include <iostream>
using namespace std;

int  g = 199;

void sabiranje(int* a, int* b){
    int c = 10;
    printf("c = %d  \n", c);
    printf("g = %d \n", g);
    *a = *a + *b;
    int g = 40;
    printf("g = %d \n", g);
}

int main(){
    int c = 20;
    int prvi = 5;
    int drugi = 6;
    printf("c = %d  \n", c);
    printf("g = %d \n", g);
    printf("%d %d\n", prvi, drugi);
    sabiranje(&prvi, &drugi);
    printf("g = %d \n", g);
    printf("%d %d", prvi, drugi);
    return 0;
}