/*Practica 2 - ejercicio 10 - el usuario selecciona del menu 
si quiere calcular la potencia n-esima de un entero o una funcion factorial 
o el combinatio de n y m */
#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcion;
    printf("Que quiere calcular? \n1. Potencia n-esima de x \n2. Factorial de n \n3. Combinatorio de n y m \n");
    scanf("%d", &opcion);}

    switch (opcion) { //se ejecute solo la parte del codigo que corresponda a la opcion elegida
        /*calculo de n-esima potencia*/
        case 1: {
            double x, potencia=1.0;
            int n, i;
            printf("Ingrese x: \n");
            scanf("%lf", &x);
            printf("Ingrese n: \n");
            scanf("%d", &n);
            for (i=0;i<n;i++){
                potencia *=x; //resultado=resultado*x
            }
            printf("La %d potencia de %.1lf es: %.2lf. \n", n, x, potencia);
            break;
        }
        /*calculo del factorial*/
        case 2: {
            int n, i, factorial=1;
            printf("Ingrese n: \n");
            scanf("%d", &n);
            for (i=1; i<=n; i++){
                factorial *=i;
            }
            printf("El factorial de %d es: %d\n", n, factorial);
            break;
        }
        /*Combinatorio de dos numeros*/
        case 3: {
            int n, m, i, factorial_n=1, factorial_m=1, diferencia,fac_dif=1;
            int combinatorio;
            printf("Ingrese n: ");
            scanf("%d", &n);
            printf("Ingrese m (debe ser menor que n): \n");
            scanf("%d", &m);
            diferencia=n-m;
            for (i=1; i<=n; i++){
                factorial_n *=i;
            }
            for (i=1; i<=m; i++){
                factorial_m *=i;
            }
            for (i=1; i<=diferencia; i++){
                fac_dif *=i;
            }
            combinatorio=factorial_n/(factorial_m*fac_dif);
            printf("El combinatorio de %d y %d es: %d\n", n, m, combinatorio);
            break;
        }
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}