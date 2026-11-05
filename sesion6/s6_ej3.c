/*Sesion 6, ejercicio 3: programa que simule una miniaventura numerica: el jugador puede
explorar distintios lugares, recoger un objeto en cada exploracion.
El programa se puede repetir tantas veces como el usuario quiera.*/
#include <stdio.h>
#include <stdlib.h>

/*Variables globales*/
int vecesBosque = 0, vecesCastillo = 0, vecesPueblo = 0, totalExploraciones = 0;

/*Funciones modularizadas*/
/* 1. Funcion bienvenida: muestra el mensaje de bienvenida*/
void bienvenida() {
    printf("\t\t**************************\n");
    printf("\t\tBIENVENIDO*A A LA AVENTURA\n");
    printf("\t\t**************************\n");
}


/*2. Funcion menu: permite elegir la locacion*/
void menu(int *opcion) {
   printf("Elige un numero: ");
   scanf("%d", opcion); // guarda en la opcion: es un puntero
}

/*3. Funcion locacion: muestra el mensaje segun el lugar escogido + objeto*/
void locacion(int *opcion){
   switch (*opcion){
   case 1:
      printf("Estas explorando el bosque.... \n");
      printf("Encuentras una espada oxidada. \n");
      vecesBosque++;
      break;
   case 2:
      printf("Entras al castillo.... \n");
      printf("Encuentras una corona dorada.\n");
      vecesCastillo++;
      break;
   case 3:
      printf("Paseas por el pueblo.... \n");
      printf("Encuentras una bolsa de monedas. \n");
      vecesPueblo++;
      break;
   }
}

/*4. Funcion estadisticas: imprime las estadisticas*/

void estadisticas (){
   totalExploraciones=vecesBosque+vecesCastillo+vecesPueblo;
    printf("Has explorado el bosque %d veces\n", vecesBosque);
    printf("Has explorado el castillo %d veces\n", vecesCastillo);
    printf("Has explorado el pueblo %d veces\n", vecesPueblo);
    printf("Has recogido un total de: %d objetos\n", totalExploraciones);
}

/*5. Funcion ultimo objeto: imprime cual era el ultimo objeto*/
void ultimo_objeto(int *opcion){
   switch(*opcion){
    case 1:
          printf("Tu ultimo objeto fue: espada oxidada.");
    break;
    case 2:
          printf("Tu ultimo objeto fue: espada oxidada.");
    break;
    case 3:
          printf("Tu ultimo objeto fue: bolsa de monedas.");
   break;
   }
}

/*5. Funcion despedida: imprime el mensaje de despedida*/
void despedida() {
    printf("\n\t\t *****************\n");
    printf("\t\t   Fin del juego.\n");
    printf("\t\t Gracias por jugar!\n");
    printf("\t\t********************\n");
}

/*6. Funcion main*/
int main(){
   int opcion, continuar;
   //char objeto;
   bienvenida(); //mostramos el mensaje de bienvenida
   do {
      menu(&opcion); //imprime el menu
      locacion(&opcion); //se ejecuta funcion locacion
      printf("Quieres seguir explorando? (1 = si, 0 = no): "); //el usuario puede elegir si quiere continuar
      scanf("%d", &continuar);
   } while (continuar==1);
      estadisticas(); //nos dice las estadisticas
      ultimo_objeto(&opcion); //imprime el ultimo objeto
      despedida(); //mostramos el mensaje de despedida
    return 0;
}
