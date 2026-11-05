/*Sesion 9, ejercicio 3: una funcion que devuelve nombre y apellidos
separados por un espacio (no hace falta que el usuario lo introduzca)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   const int TAM=17;
   char nombre_apellido[17] = "Klara Sklenarova";
   char nombre[17], apellido[17];
   int i=0, j=0;


   /*dividimos:*/
   /*copiar el nombre*/
    while (nombre_apellido[i] != ' ' && nombre_apellido[i] != '\0') {
        nombre[i] = nombre_apellido[i];
        i++;
    }
    nombre[i] = '\0';   // fin del nombre (eso lo de la teoria)

    i++; // saltar el espacio

    /*copiar el apellido*/
    while (nombre_apellido[i] != '\0') {
        apellido[j] = nombre_apellido[i];
        i++;
        j++;
    }
    apellido[j] = '\0'; //fin del apellido
   printf("Su nombre es: %s y su apellido %s", nombre, apellido);

    return 0;
}
