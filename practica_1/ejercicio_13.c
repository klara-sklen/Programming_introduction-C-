// Ejercicio 13 - calcula la cantidad de agua necesaria para obtener una disolucion de H2SO4 a una cierta concentracion
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;   // x = volumen final, y = concentración deseada
    float Vol_acido, Vol_agua;

    printf("Ingrese el volumen final en cm3 (x): ");
    scanf("%f", &x);

    printf("Ingrese la concentracion deseada en %% (y): ");
    scanf("%f", &y);

Vol_acido = (y * x) / Concentracion; // calcula volumen de ácido concentrado necesario
Vol_agua = x - Vol_acido; // calcula volumen de agua necesario

printf("Para obtener %.2f cm3 de solucion al %.2f%%:\n", x, y);
printf(" -> %.2f cm3 de acido sulfurico al 80%%\n", Vol_acido);
printf(" -> %.2f cm3 de agua\n", Vol_agua);
    return 0;
}
