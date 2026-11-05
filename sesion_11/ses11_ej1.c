/*Sesion 11 - ejercicio 1:*/

#include<stdio.h>

struct Hora{
    int hora, min, seg;
};

struct Hora entrada (){
    struct Hora h;
    printf("Introduce la hora (horas-minutos-segundos): ");
    scanf("%d %d %d", &h.hora, &h.min, &h.seg);

    return h;
}

struct Hora diferencia_cal (struct Hora inicial, struct Hora final){
    struct Hora dif;
    int segundos_inicio, segundos_fin, dif_segundos;

    //convertimos a segundos
    segundos_inicio = inicial.hora * 3600 + inicial.min * 60 + inicial.seg;
    segundos_fin = final.hora * 3600 + final.min * 60 + final.seg;

    //si final<inicial: pasamos al dia sig
    if (segundos_fin < segundos_inicio) {
        segundos_fin += 24 * 3600;
    }

    //diferencia en segundos
    dif_segundos=segundos_fin-segundos_inicio;

    //volvemos a convertir a h:m:s
    dif.hora = dif_segundos / 3600;
    dif_segundos %= 3600;
    dif.min = dif_segundos / 60;
    dif.seg = dif_segundos % 60;

    return dif;

}

void devolver_resultado (struct Hora diferencia){
    printf("La diferencia es: %02d:%02d:%02d\n", diferencia.hora, diferencia.min, diferencia.seg);
}

int main (){
    struct Hora inicial, final, diferencia;

    //lamamos la funcion entrada dos veces: para introducir momento inicial y final
    inicial=entrada();
    final=entrada();

    //guardamos el resultado de la diferencia
    diferencia=diferencia_cal(inicial, final);

    devolver_resultado(diferencia); //imprimimos el resultado por pantalla

    return 0;
}