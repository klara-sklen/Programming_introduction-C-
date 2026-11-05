/*Practica 2, ejercicio 6 - que imprime el programa*/
#include <stdio.h>
#include <stdlib.h>

int main(){
int y,x=1,total=0;
while (x <= 10) {
y= x * x;
printf("%d\n", y);
total = total + y;
x=x+1;
}
printf("El total es %d\n", total);
return 0;
}
/*El programa imprime la suma de las segundas potencias de los numeros enteros de 1 a 10*/
