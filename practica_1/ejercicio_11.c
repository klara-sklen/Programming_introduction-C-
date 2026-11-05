// ejercicio 11: Este programa calcula la diferencia entre dos tiempos.//
#include <stdio.h>
#include <stdlib.h>

int main(){
int horas_1, minutos_1, segundos_1, tiempo_1, horas_2, minutos_2, segundos_2, tiempo_2; //iniciamos las variables - para el primer tiempo y segundo
int dif_tiempos_s, dif_tiempos_hms; //iniciamos la diferencia entre los dos tiempos (en segundos y en h:m:s)
int dh, dm, ds; //diferencia de cada unidad

printf("Ingrese el primer instante (horas minutos segundos): "); // el usuario va a ingeresar los dos instantes temporales
scanf("%d %d %d", &horas_1, &minutos_1, &segundos_1);
printf("Ingrese el primer instante (horas minutos segundos): ");
scanf("%d %d %d", &horas_2, &minutos_2, &segundos_2);

tiempo_1=horas_1*3600+minutos_1*60+segundos_1;
tiempo_2=horas_2*3600+minutos_2*60+segundos_2;

dif_tiempos_s=abs(tiempo_1-tiempo_2);

// Convertir diferencia a h:m:s
    dh = dif_tiempos_s / 3600;
    dif_tiempos_s %= 3600;
    dm = dif_tiempos_s / 60;
    ds = dif_tiempos_s % 60;

printf("La diferencia es: %02d:%02d:%02d", dh, dm, ds);

    return 0;
}
