#include<stdio.h>
void hanoi(int n_discos, char desde, char ayudante, char hasta){
if (n_discos !=0){
hanoi(n_discos-1,desde, hasta, ayudante);
printf("Movemos disco desde %c hasta %c\n", desde, hasta);
hanoi(n_discos-1,ayudante, desde, hasta);
}
}
int main(){
hanoi(3,'A', 'B', 'C'); //hay 3 discos
return 0;
}