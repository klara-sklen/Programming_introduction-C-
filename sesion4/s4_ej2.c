/*Sesion 4 -ejercicio 2: encontrar numeros perfectos menores que 10 000*/
#include <stdio.h>
#include <stdlib.h>

int main() {
int n, i, suma; //iniciamos las variables: n sera el num perfecto e i sus divisores

for (n = 1; n < 10000; n++) { //todos los n perfectos estan en [1,1000), incrementa en 1
   suma = 0; //iniciamos la variable suma -> suma sera el n. perfecto

for (i = 1; i <= n / 2; i++) { //i debe ser menor que 1/2 de n (divisible por 2)
   if (n % i == 0) { //n tiene que ser divisible entre i
   suma += i; //si se cumple que n es divisible por i a la suma le sumamos i
       }
   }

if (suma == n) { //si la suma es igual a n, se ha encontrado el numero perfecto
      printf("Numeros perfectos menores de 10000:\n");
      printf("%d\n", n);
        }
    }
    return 0;
}

