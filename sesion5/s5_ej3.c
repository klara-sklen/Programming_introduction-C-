/*Sesion 5 -ejercicio 3 - programa que calcula maximo comun divisor y minimo comun multiplo
de dos numeros positivos - MODULARIZADO*/
#include <stdio.h>
#include <stdlib.h>

//funcion para calcular MCD sin Euclides
int calcularMCD(int a, int b){
    int mcd;
    int menor, i;

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
    return mcd;
}

//funcion para calcular MCM
int calcularMCM(int a, int b){
   return (a * b) / calcularMCD(a, b);
}

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

   // Mostrar resultado segun los que el usuario elegio
   if (opcion == 1) {
      mcd=calcularMCD(a,b);
      printf("El Maximo Comun Divisor de %d y %d es: %d\n", a, b, mcd);
   } else if (opcion == 2) {
      mcm=calcularMCM(a,b);
      printf("El Minimo Comun Multiplo de %d y %d es: %d\n", a, b, mcm);
   }

   // Preguntar si desea hacer tmb el otro calculo
   printf("Desea realizar otro calculo? (s/n): ");
   scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S'); //si el usuario dijo si (s or S) el programa calcula la otra opcion (bucle controlado por la condicion)
return 0;
}
