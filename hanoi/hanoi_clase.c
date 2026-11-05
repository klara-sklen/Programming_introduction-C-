#include<stdio.h>


void hanoi(int n_discos, char inicio, char aux, char final){
    if(n_discos>0){
        hanoi(n_discos-1,inicio, final, aux);
        printf("Moviendo disco de %c a %c \n", inicio, final);
        hanoi(n_discos-1, aux, inicio, final);
    }
}


int main(){
    hanoi(4, 'X', 'Y', 'Z');
    return 0;
}