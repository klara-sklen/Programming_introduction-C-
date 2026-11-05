/*Sesion 7 - ejercicio 1 y 2: pide al usuario n enteros y los almacena en un vector (lectura termina con 0)
calcular media de los pares/impares por separad, valor maximo + minimo + sus indices
MODULARIZADO*/

#include <stdio.h>
#include <stdlib.h>
/*Entrada: el usuario introduce los datos*/
int entrada (int numero[]){
    int tamano, i;
    printf("Introduce los numeros enteros (max 100, 0 para terminar):\n");
    for (i = 0; i < 100; i++) { //con un bucle for para no tener que hacer printf xy veces
        while (numero[i]!=0);{
            printf("Numero %d: ", i + 1);
            scanf("%d", &numero[i]);
        }
    }
    return i; //cantidad de numeros introducidos
}

/*Calcula la posicion de minimo y maximo*/
void min_max (int numero[100], int *tamano, int *min, int *max, float *pos_min, int *pos_max){
    int i; 
    *pos_min=*pos_max=0;

    // iniciamos max y min con el primer valor
    *max = *min = numero[0];

    // recorremos los numeros para encontrar max y min
    for (i = 0; i < *tamano; i++) {
        if (numero[i] > *max) {
           * max = numero[i];
            *pos_max = i + 1;  // para que este en la posicion 1-tamano (empieza con i=0)
        }
        if (numero[i] < *min) {
            *min = numero[i];
            *pos_min = i + 1;
        }
    }
}

void medias (int numero[], int *tamano, float *media_par, float *media_impar){
    int cont_par=0, cont_impar=0, i; //iniciamos los contadores: necesarios para poder dividir con ellos
    float suma_par=0, suma_impar=0;
    for (i=0; i<*tamano; i++){
        if(numero[i]%2==0){
            suma_par+=numero[i];
            cont_par++;
        }
        else {
            suma_impar+=numero[i];
            cont_impar++;
        }
    }
}

int main() {
    int max, min, numero[100];
    float media_par, media_impar;
    int pos_max, pos_min, tamano;

    tamano=entrada(numero);
    min_max(numero, tamano, &min, &max, &pos_min, &pos_max);
    medias(numero, tamano, &media_par, &media_impar);

    
// Mostrar resultados
   printf("Maximo: %d en la posicion %d\n", max, pos_max);
   printf("Minimo: %d en la posicion %d\n", min, pos_min);
   printf("Media de pares es: %.2f", media_par);
   printf("Media de impares es: %.2f", media_impar);

    return 0;
}
