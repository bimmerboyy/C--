//makke 
#include <stdio.h>
int fibonaci(int n){
   if (n == 0)
       return 0;
   if (n == 1)
       return 1;
   return fibonaci(n - 1) + fibonaci(n - 2);
}

int main()
{
   int n;
   printf("Unesite n: ");
   scanf("%d", &n);
   printf("%d. fibonaci broj je %d\n", n, fibonaci(n));
   return 0;
}
