/* Sesion 5, ejercicio 4 -programa que determina el tipo de 2 numeros introducidas por el usuario*/
#include <stdio.h>
#include <stdlib.h>

/*primera funcion: para ver si los dos numeros son primos*/
int primo(int n){
   int cont = 0, i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cont++;
    }
    if (cont == 2) //si tiene solo dos divisores (1 y a si mismo), el numero es primo
        return n;
}

/*segunda funcion: para ver si son primos relativos*/
int primo_relativo(int n, int m){
   int menor, mcd, i;
      if (n < m) { //para decidir con que numero se va a dividir
         menor = n;
      } else {
         menor = m;
      }

      for (i=1; i <= menor; i++) { //recorre todos los numeros hasta llegar al menor n de los dos
         if (n % i == 0 && m % i == 0) { //comprueba si i divide ambos numeors
               mcd = i; //guarda el divisor encotrado en mcd
         }
      }
   return mcd == 1; // devuelve 1 si son primos relativos, 0 si no

}

/*tercera funcion: para ver si los dos numeros son perfectos*/
int perfecto(int n) {
    int suma = 0, i, resultado;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    if (suma == n) {
        resultado = 1;   // verdadero
    } else {
        resultado = 0;   // falso
    }

    return resultado;
}

/*cuarta funcion: para ver si son amigables*/
int amigables(int n, int m) {
   int suma1 = 0, suma2 = 0, i;
   int resultado;

   // suma de divisores propios de n
   for (i = 1; i <= n / 2; i++) {
      if (n % i == 0) {
         suma1 += i;
      }
   }

   // suma de divisores propios de m
   for (i = 1; i <= m / 2; i++) {
      if (m % i == 0) {
         suma2 += i;
      }
   }

   if (suma1 == m && suma2 == n) {
      resultado = 1;
   } else {
      resultado = 0;
   }

   return resultado;
}


int main(){
   int a,b;
   int opcion; //las 4 opciones del menu

   //pedimos al usuario los numeros
   printf("Introduce el primer numero: ");
   scanf("%d", &a);
   printf("Introduce el segundo numero: ");
   scanf("%d", &b);

   //le preguntamos que quiere calcular
   printf("Que desea calcular?\n Si son primos (1), si son primos relativos (2), si son numeros perfectos (3) o si son amigables (4).\n");
   printf("Ingrese su opcion (1, 2, 3 o 4): \n");
   scanf("%d", &opcion);

   if (opcion == 1) { //determinar si dos numeros son primos

      if (primo(a)) //determinamos si el primer numero es primo
         printf("El numero %d es primo.\n", a);
      else
         printf("El numero %d no es primo.\n", a);

      if (primo(b)) //determinamos si el segundo numero es primo
         printf("El numero %d es primo.\n", b);
      else
         printf("El numero %d no es primo.\n", b);
   }

   if (opcion == 2) { //determinar si son primos relativos
      if (primo_relativo(a, b) == 1) {
         printf("Los numeros %d y %d son primos relativos.\n", a, b);
      } else {
         printf("Los numeros %d y %d NO son primos relativos.\n", a, b);
      }
   }

   if (opcion == 3) { //determinar si son perfectos
      if (perfecto(a) == 1) { //llamamos a la funcion para determinar si a es perfecto
         printf("%d es un numero perfecto.\n", a);
      } else {
         printf("%d NO es un numero perfecto.\n", a);
      }

      if (perfecto(b) == 1) { //lo mismo para b
         printf("%d es un numero perfecto.\n", b);
      } else {
         printf("%d NO es un numero perfecto.\n", b);
      }
   }

   if (opcion == 4) { //determinar si son amigables
      if (amigables(a, b) == 1) {
         printf("%d y %d son numeros amigables.\n", a, b);
      } else {
         printf("%d y %d NO son numeros amigables.\n", a, b);
      }
   }

   return 0;
}
