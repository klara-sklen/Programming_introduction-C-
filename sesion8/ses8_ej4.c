/*Sesion 8, ejercicio 4: programa que determina cual es el primer valor
del vector que sobrepasa el limite junto con su posicion en el vector,
si ninguno sobrepasa el limite, tmb lo indica*/
#include <stdio.h>
#include <stdlib.h>
const int TAM=16;

int main() {
    int pesos[16] = {10, 22, 40, 51, 100, 222, 225, 240, 340, 500, 501, 502, 503, 600, 620, 765};
    int limite_maximo, inicio = 0, fin = TAM - 1, centro, resultado=0, encotrado=0;

    printf("Introduce el peso maximo permitido: ");
    scanf("%d", &limite_maximo);

    // busqueda binaria
    while (inicio <= fin) { //cuando inicio>fin: ya se revisarion todos los datos
        centro = (inicio + fin) / 2;
        if (pesos[centro] > limite_maximo) { //si el valor central es mayor que el maximo: mira a la izquierda
            resultado = centro;    // posible candidato
            fin = centro - 1;      // buscando mas a la izquierda
            encotrado=1;
        } else {
            inicio = centro + 1; //buscando mas a la derecha
        }
    }

    if (encotrado) {
        printf("El primer paquete que supera el limite es %d.\n", pesos[resultado]);
        printf("Esta en la posicion %d del vector.\n", resultado + 1);
    } else {
        printf("Todos los paquetes estan dentro del limite permitido.\n");
    }

    return 0;
}
