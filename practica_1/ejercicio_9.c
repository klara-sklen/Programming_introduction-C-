#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float x_1, x_2, x_3, media=0, sigma=0; //iniciemos los tres numeros y la media y desv.tip
printf("Introduce el primer numero (x_1):"); //el usuario introduce el primer numero
scanf("%f", &x_1);
printf("Introduce el segundo numero (x_2):"); //el usuario introduce el seguno numero
scanf("%f", &x_2);
printf("Introduce el tercer numero (x_3):"); // el usuario introduce el tercer numero
scanf("%f", &x_3);
media=(x_1+x_2+x_3)/3; //se calcula la media
sigma=sqrt((pow(x_1-media,2)+pow(x_2-media,2)+pow(x_3-media,2))/3); //se calcula la desv tip
printf("La desviacion tipica vale:, %f", sigma);
return 0;
}
