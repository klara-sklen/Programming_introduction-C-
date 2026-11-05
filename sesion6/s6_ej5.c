/*Sesion 6 - ejercicio 5: el ejercicio 5 de la sesion 5 reescrito usando recursividad*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

int opcion(){ 
   int opcion;
   printf("Que quiere calcular? (n y m son enteros y n debe ser mayor que m) \n");
   printf("1. Potencia n-esima de m. \n");
   printf("2. Factorial de n. \n");
   printf("3. Combinatorio de n y m \n");
   scanf("%d", &opcion);
   return opcion;
}

void entrada(int *n, int *m) {
    printf("Introduce un entero n: \n");
    scanf("%d", n);  // lee directamente en la dirección de n
    printf("Introduce un entero m: \n");
    scanf("%d", m);  // lee directamente en la dirección de m
}

int factorial (int n){
    int salida;
    int i, fact=1;
        
    if (n==0){
        salida=1;
    }
    else {
    salida= n*factorial(n-1); //usamos la recursividad
    }
    return salida;
}

int combinatoria(int n, int m){
    int comb;
    comb=factorial(n)/(factorial(m)*factorial(n-m)); //implementamos la formula del combinatorio
    return comb;
}


int calculos (int *n, int *m, int *opcion){
    int resultado;
    switch (*opcion){
        case 1:{ //calcula la potencia
            resultado=pow(*n,*m);
            break;
        }
        case 2: { //calcula el factorial
            resultado=factorial(*n);
            break;
        }
        case 3: { //calculo del combinatorio
            resultado=combinatoria(*n, *m);
            break;
        }
    }
    return resultado;
}

void salida(int opcion, int n, int m, int resultado){
    switch (opcion){
        case 1:
            printf("La potencia %d-sima de %d es: %d. \n", m, n, resultado);
            break;
        case 2:
            printf("El factorial de %d es: %d\n", n, resultado);
            break;
        case 3:
            printf("El combinatorio de %d y %d es: %d\n", n, m, resultado);
            break;
    }
}

int main() {
    int n, m, op, resultado;

    op = opcion();          // obtener la opción del usuario
    entrada(&n, &m);        // obtener n y m

    resultado=calculos(&n, &m, &op);  // hacer el cálculo
    salida(op, n, m, resultado); //muestra el resultado

    return 0;
}