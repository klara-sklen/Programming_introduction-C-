/*Sesion 5, ejercicio 2 - programa que pide 2 numeros enteros y luego muestre un rectangulo
de n filas y m columnas*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int m, n, i=0, j=0; //iniciamos las variables

//pedimos al usuario los datos//
printf("Numero de filas: ");
scanf("%d", &n);
printf("Numero de columnas: ");
scanf("%d", &m);

//usaremos un bucle para mostrar el rectangulo

for (i=0; i<n;i++){ //recorremos todas las filas
   for (j=0; j<m; j++){ //recorremos todas las columnas
      if ( i== 0 ||  i== n - 1 ||  j== 0 || j == m - 1){
         printf("*");
      }
      else{
         printf(" ");
      }
   }
   printf("\n"); // salto de línea al final de cada fila

}
    return 0;
}
