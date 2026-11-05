// P1 -ejercicio 4 - encotrar el valore de la variable final//
#include <stdio.h>
int main() {
const float Y=4.0, Z=3.0, X=3.0; //iniciamos las constantes
float final_y, final_x;
final_y=Y/Z-Y*Z; //aplicamos las fórmulas del enunciado

final_x=X-3.0;
final_x=final_x-X;

printf("valor de final_y: %f /n valor de final_x: %f", final_y, final_x);


return 0;
}