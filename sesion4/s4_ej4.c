/*Sesion 4 - ejercicio 4: el programa adivina que numero entre 1 y 100 piensa usuario*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int min, max, intentos, guess;
char repetir, respuesta;

do { /*bucle para repetir todo el juego - hay que asignar los valores aqui para q el usuario pueda jugar con
      todos los numeros entre 0 y 100*/
min=0;
max=100;
intentos=0;

while (respuesta!= '=' &&min<=max) { //bucle para adivinar, && para comprobar que no miente
guess=(min+max)/2; //divide el intervalo a mitad
intentos++; //se suma 1 al intentos

printf("Es tu numero mayor, igual o menor que  %d? \n Por favor, responde con >, = o <. ", guess);
scanf(" %c", &respuesta);
   if (respuesta== '<'){ //si el numero es menor que guess, el maximo sera menor
      max=guess-1;
      } else if (respuesta== '>'){ //si el numero es mayor que guess, el minimo sera mayor
      min=guess+1;
      }
}

if (respuesta == '=') {
            printf("Lo he adivinado! Tu numero es %d. He necesitado %d intentos.\n", guess, intentos);
        } else {
            printf("Mientes! Ya no juego mas contigo.\n");
        }
printf("Quieres repetir el juego? (s/n): "); //para repetir el juego
   scanf(" %c", &repetir);

} while (repetir == 's' || repetir == 'S'); //si el usuario dijo si, el programa se repite
return 0;
}
