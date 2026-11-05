/*Sesion 5 - ejercicio 5: el usuario elige del menu si quiere calcular potencial, factorial, combinatiorio
de valores leidos del teclados (DESCOMPOSICION MODULAR + PASOS POR REFERENCIA)*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

int opcion(){ 
   int opcion;
   printf("Que quiere calcular? (n y m son enteros) \n");
   printf("1. Potencia n-esima de m. \n");
   printf("2. Factorial de n. \n");
   printf("3. Combinatorio de n y m \n");
   scanf("%d", &opcion);
   scanf("%d", &opcion);
   return opcion;
}

void entrada(int *n, int *m) {
    printf("Introduce un entero n: \n");
    scanf("%d", n);  // lee directamente en la dirección de n
    printf("Introduce un entero m: \n");
    scanf("%d", m);  // lee directamente en la dirección de m
}


int calculos_salida (int *n, int *m, int *opcion){
    int resultado;
    switch (*opcion){
        case 1:{ //calcula la potencia
            int potencia;
            potencia=pow(*n,*m);
            printf("La potencia %d-sima de %d es: %d. \n", *m, *n, potencia);
            resultado=potencia;
            break;
        }
        case 2: { //calcula el factorial
            int i, factorial=1;
            for (i=1; i<=*n; i++){
                factorial *=i;
            }
            printf("El factorial de %d es: %d\n", *n, factorial);
            resultado=factorial;
            break;
        }
        case 3: { //calculo del combinatorio
            int i, factorial_n=1, factorial_m=1, diferencia,fac_dif=1, combinatorio;
            diferencia=*n-*m;
            for (i=1; i<=*n; i++){
                factorial_n *=i;
            }
            for (i=1; i<=*m; i++){
                factorial_m *=i;
            }
            for (i=1; i<=diferencia; i++){
                fac_dif *=i;
            }
            combinatorio=factorial_n/(factorial_m*fac_dif);
            printf("El combinatorio de %d y %d es: %d\n", *n, *m, combinatorio);
            resultado=combinatorio;
            break;
        }
    }
    return resultado;
}

int main() {
    int n, m, op;

    op = opcion();          // obtener la opción del usuario
    entrada(&n, &m);        // obtener n y m

    calculos_salida(&n, &m, &op);  // hacer el cálculo

    return 0;
}

