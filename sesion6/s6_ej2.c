/*Sesion 6 - ejercicio 2: programa modular que calcula el area y el perimetro 
de un cuadrado / circulo / triangulo equilatero */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Funcion que imprime el menu y devuelve la opcion elegida*/
int opcion(){ 
   int opcion;
   printf("Con que figura desea trabajar? \n");
   printf("1. Cuadrado \n2. Circulo \n3. Triangulo equilatero\n");
   printf("Elige una figura: ");
   scanf("%d", &opcion);
   return opcion;
}

/*Funcion que pide la medida (lado o radio)*/
float entrada(){
   float medida;
   printf("Ingrese la medida correspondiente (lado o radio): ");
   scanf("%f", &medida);
   return medida;
}

/*Funcion que realiza los calculos del area y perimetro segun la figura*/
void calculos(int figura, float medida, float *area, float *perimetro){
   const float PI = 3.14;

   switch(figura){
      case 1: // cuadrado
         *area = pow(medida,2);
         *perimetro = 4 * medida;
         break;
      case 2: // circulo
         *area = PI * pow(medida,2);
         *perimetro = 2 * PI * medida;
         break;
      case 3: // triangulo equilatero
         *area = sqrt(3)/4 * pow(medida,2);
         *perimetro = 3 * medida;
         break;
      default:
         *area = 0;
         *perimetro = 0;
         printf("Opcion no valida, hay solo 3 opciones posibles (figuras).\n");
         break;
   }
}

/*Funcion que imprime los resultados*/
void salida(float area, float perimetro){
   if(area != 0 && perimetro != 0)
      printf("El area es de %.2f y el perimetro mide %.2f.\n", area, perimetro);
}

/*Funcion main*/
int main(){
   int fig;
   float medida, area, perimetro;

   fig = opcion();        // selecciona figura
   medida = entrada();    // pide dato
   calculos(fig, medida, &area, &perimetro); // hace los calculos
   salida(area, perimetro); // muestra resultados

   return 0;
}
