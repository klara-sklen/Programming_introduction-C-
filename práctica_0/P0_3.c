#include <stdio.h>
#include <math.h>

int main(){

   int N, bits=0;
   printf("Introduce un numero natural:");
   scanf("%d", &N);
   bits = 1+log2(N);
   printf("Numero de bits necesarios para representar el numero N es: %d\n ", bits);
    return 0;
}
