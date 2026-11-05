/*Practica 2, ejercicio 8: programa que lee 10 valores y calcule el maximo*/
#include <stdio.h>

int main() {
    float numero[10], max; //arreglo de 10 numeros, el valor maximo
    int i; 

/*usuario introduce los 10 numeros*/
printf("Introduce un numero: \n");
    for (i = 0; i < 10; i++) { //con un bucle for para no tener que hacer printf 10 veces
        printf("Numero %d: \n", i + 1);
        scanf("%f", &numero[i]);
    }
max=numero[0]; //iniciamos el maximo
    
/*bucle para determinar el maximo*/
    for (i=0; i<10;i++ ){ //recorre los 10 numeros
        if (numero[i]>max){
            max=numero[i];
        }
    }
printf("El maximo de los 10 numeros es %f", max);
    return 0;
}