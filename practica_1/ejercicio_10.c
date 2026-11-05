/*Practica 1 - ejercicio 10: Realizar un programa que lea una cantidad de horas, minutos y segundos con valores arbitrarios, y los
transforme en una expresion de tiempo convencional*/

#include <stdio.h>

int main(){
int horas, minutos, segundos, horas_con, minutos_con, segundos_con; //iniciamos variables - primero inconvencionales, luego convencionales

//El usuario introduce los datos:
printf("Introduce las horas: \n");
scanf("%d", &horas);
printf("Introduce los minutos: \n");
scanf("%d", &minutos);
printf("Introduce los segundos: \n");
scanf("%d", &segundos);

//"traducimos" los valores inconvencionales a convenciales
segundos_con=segundos%60 ;
minutos=segundos/60+minutos;
minutos_con=minutos/60;
horas_con=horas+minutos/60;
printf("El tiempo es %d horas, %d minutos y %d segundos.", horas_con, minutos_con, segundos_con);
return 0;
}