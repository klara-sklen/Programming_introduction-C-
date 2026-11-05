/*Sesion 6 - ejercicio 6: el programa 1 de la sesion 5 modularizado + reescrito con recursividad*/
#include <stdio.h>
#include <stdlib.h>

void buscar(int min, int max, int intentos) {
    char respuesta;
    int guess;

    if (min > max) {
        printf("Mientes! Ya no juego mas contigo.\n");
        return;  // termina la recursion sin valores de error
    }

    guess = (min + max) / 2;
    intentos++;

    printf("Es tu numero mayor, igual o menor que %d?\n", guess);
    printf("Por favor, responde con >, = o < : ");
    scanf(" %c", &respuesta);
    if (respuesta == '=') {
        printf("Lo he adivinado! Tu numero es %d. He necesitado %d intentos.\n",
               guess, intentos);
        return;  // numero adivinado: fin de la recursion
    }
    else if (respuesta == '<') {
        buscar(min, guess - 1, intentos); //nuevo max==guess-1
    }
    else if (respuesta == '>') {
        buscar(guess + 1, max, intentos); //nuevo min==guess+1
    }
    else {
        printf("Respuesta no valida. Intenta de nuevo.\n"); //si introduce otro simbolo
        buscar(min, max, intentos); // se repite sin perder el estado
    }
}


int main() {
    char repetir;

    do {
        int min = 0, max = 100;
        int intentos = 0;

        buscar(min, max, intentos);

        printf("Quieres repetir el juego? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    return 0;
}