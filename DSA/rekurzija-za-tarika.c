#include <stdio.h>

int fact(int n ){
    if(n == 1){
        return 1;
    }
    else return  n * fact(n - 1);
}

int s1 = 1; 
int s2 = 1;
int s3 = 1;
int s4 = 1;
int s5 = 1;

int n1 = 5;
int n2 = 4;
int n3 = 3;
int n4 = 2;
int n5 = 1;

int main(){
    int n1 = 5;
    int s1 = n1;
    if(  n1 == 1){
        s1 *= 1;
    }
    else{
        n2 = 4;
        s2 = n2;
        if(n2 == 1){
            s2 *= 1;
        }
        else{
            n3 = 3;
            s3 = n3;
            if(n3 == 1){
                s3 *= 1;
            }
            else{
                n4 = 2;
                s4 = n4;
                if(n4 == 1){
                    s4 *= 1;
                }
                else{
                    n5 = 1;
                    s5 = n5;
                    if(s5 == 1){
                        s5 *= 1;
                    }
                    s4 *= s5;
                }
                s3 *= s4;
            }
            s2 * = s3;
        }
        int s1 = s1 * s2;
    }
    printf("%d", s1);

    return 0;
}