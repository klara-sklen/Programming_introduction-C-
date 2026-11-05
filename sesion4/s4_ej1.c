/*Sesion 4 - ejercicio 1: lee 10 numeros, calcule su min y max y nos dice en que posicion esta
el maximo y minimo*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero[10]; //arreglo de 10 numeros reales
    float max, min; //guardan el valor maximo y minimo
    int pos_max = 0, pos_min = 0, i; //para guardar la posicion

    // pedimos al usuario que introduzca los 1 num
    printf("Introduce 10 numeros reales:\n");
    for (int i = 0; i < 10; i++) { //con un bucle for para no tener que hacer printf 10 veces
        printf("Numero %d: ", i + 1);
        scanf("%f", &numero[i]);
    }

    // iniciamos max y min con el primer valor
    max = min = numero[0];

    // recorremos los numeros para encontrar max y min
    for (i = 0; i < 10; i++) {
        if (numero[i] > max) {
            max = numero[i];
            pos_max = i + 1;  // para que este en la posicion 1-10
        }
        if (numero[i] < min) {
            min = numero[i];
            pos_min = i + 1;
        }
   }
// Mostrar resultados
   printf("Maximo: %.2f en la posicion %d\n", max, pos_max);
   printf("Minimo: %.2f en la posicion %d\n", min, pos_min);
    return 0;
}
