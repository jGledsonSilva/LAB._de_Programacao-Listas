/* Faça um programa em C que gere um vetor com 3 números inteiros pseudoaleatórios no intervalo [0, 19] e apresente a sua média aritmética e geométrica. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define QTD 19

int main(){

    float v[TAM], soma, med;
    srand(time(NULL));

    system("clear");

    for(int i=0; i<TAM; i++){
        v[i]=(rand()%QTD);
    }

    for (int i=0; i<TAM; i++){
        soma += v[i];
    }med = soma/TAM;
    
    printf("Vetor: ");
    for (int i=0; i<TAM; i++){
        printf("[%.f]",v[i]);
    }
    printf("\nMedia: %.2f\n\n", med);

    return 0;
}