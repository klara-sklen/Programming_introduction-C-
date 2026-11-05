/*Sesion 11 - ejercicio 2: programa que gestiona las notas de alumnos durante 3 exámenes, el programa muestra la lista completa, los aprobados, y el alumno con mejor/peor nota*/

#include <stdio.h>

const int MAX = 15; // longitud maxima del nombre
const int NUM_NOTAS = 3; // numero de eaámenes por alumno

/*definicion de la estructura Alumno*/
struct Alumno {
    char nombre[MAX];
    float notas[NUM_NOTAS];
};

/*funcion para leer los datos de los alumnos*/
void leerAlumnos(struct Alumno alumnos[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        printf("Nombre del alumno %d: ", i+1);
        scanf("%s", alumnos[i].nombre);
        for(j = 0; j < NUM_NOTAS; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &alumnos[i].notas[j]);
        }
    }
}

/*funcion para mostrar todos los alumnos y sus notas*/
void mostrarAlumnos(struct Alumno alumnos[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Alumno: %s | Notas: %.2f %.2f %.2f\n",
               alumnos[i].nombre,
               alumnos[i].notas[0],
               alumnos[i].notas[1],
               alumnos[i].notas[2]);
    }
}

/*funcion para mostrar los alumnos aprobados (promedio >= 5)*/
void mostrarAprobados(struct Alumno alumnos[], int n) {
    int i;
    float media;
    for(i = 0; i < n; i++) {
        media = (alumnos[i].notas[0] + alumnos[i].notas[1] + alumnos[i].notas[2]) / NUM_NOTAS;
        if(media >= 5) {
            printf("%s ha aprobado con la media %.2f\n", alumnos[i].nombre, media);
        }
    }
}

/*funcion para mostrar el alumno con promedio maximo*/
void alumnoMaximo(struct Alumno alumnos[], int n) {
    int i, idxMax = 0;
    float max, media;
    max = (alumnos[0].notas[0] + alumnos[0].notas[1] + alumnos[0].notas[2]) / NUM_NOTAS;

    for(i = 1; i < n; i++) {
        media = (alumnos[i].notas[0] + alumnos[i].notas[1] + alumnos[i].notas[2]) / NUM_NOTAS;
        if(media > max) {
            max = media;
            idxMax = i;
        }
    }
    printf("El/la mejor alumn@ es %s con la nota: %.2f\n", alumnos[idxMax].nombre, max);
}

/*funcion para mostrar el alumno con promedio minimo*/
void alumnoMinimo(struct Alumno alumnos[], int n) {
    int i, idxMin = 0;
    float min, media;
    min = (alumnos[0].notas[0] + alumnos[0].notas[1] + alumnos[0].notas[2]) / NUM_NOTAS;

    for(i = 1; i < n; i++) {
        media = (alumnos[i].notas[0] + alumnos[i].notas[1] + alumnos[i].notas[2]) / NUM_NOTAS;
        if(media < min) {
            min = media;
            idxMin = i;
        }
    }
    printf("El/la peor alumn@ es %s con la nota: %.2f\n", alumnos[idxMin].nombre, min);
}

/*funcion main*/
int main() {
    int numero_alumnos;
    printf("Cuantos alumnos hay en la clase? ");
    scanf("%d", &numero_alumnos);

    struct Alumno alumnos[numero_alumnos];

    //lamamos todas las funciones
    leerAlumnos(alumnos, numero_alumnos);
    mostrarAlumnos(alumnos, numero_alumnos);
    mostrarAprobados(alumnos, numero_alumnos);
    alumnoMaximo(alumnos, numero_alumnos);
    alumnoMinimo(alumnos, numero_alumnos);

    return 0;
}
