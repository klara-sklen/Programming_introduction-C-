/*Sesion 4 -ejercicio 3 - programa que calcula maximo comun divisor y minimo comun multiplo
de dos numeros positivos*/
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
int opcion, a, b, mcd, mcm;
char repetir;

do {
   // Preguntar al usuario que quiere calcular
   printf("Que desea calcular?\n Maximo Comun Divisor (MCD) o Minimo Comun Multiplo (MCM)\n");
   printf("Ingrese su opcion (1 o 2): ");
   scanf("%d", &opcion);

   // Leer los dos números positivos
   printf("Ingrese el primer numero positivo: ");
   scanf("%d", &a);
   printf("Ingrese el segundo numero positivo: ");
   scanf("%d", &b);

   // calcular MCD
   int menor, i=1;

    if (a < b) { //para decidir con que numero se va a dividir
        menor = a;
    } else {
        menor = b;
    }

    for (i=1; i <= menor; i++) { //recorre todos los numeros hasta llegar al menor n de los dos
        if (a % i == 0 && b % i == 0) { //comprueba si i divide ambos numeors
            mcd = i; //guarda el divisor encotrado en mcd
        }
    }

   // calcular MCM usando la relación MCM(a,b) * MCD(a,b) = a * b
   mcm = (a * b) / mcd;

   // Mostrar resultado segun los que el usuario elegio
   if (opcion == 1) {
      printf("El Maximo Comun Divisor de %d y %d es: %d\n", a, b, mcd);
   } else if (opcion == 2) {
      printf("El Minimo Comun Multiplo de %d y %d es: %d\n", a, b, mcm);
   }

   // Preguntar si desea hacer tmb el otro calculo
   printf("Desea realizar otro calculo? (s/n): ");
   scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S'); //si el usuario dijo si (s or S) el programa calcula la otra opcion (bucle controlado por la condicion)
return 0;
}
