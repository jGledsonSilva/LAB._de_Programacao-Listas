/* Faça um programa em C que gere um vetor com 100 números inteiros pseudoaleatórios no intervalo
definido pelo usuário e apresente esse vetor ordenado (crescente). Faça uma versão com o método
de ordenação por seleção e outra pelo método bolha (bubble sort). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main(){

    int v[TAM], aux, inte, i, j;
    srand(time(NULL));

    system("clear");

    printf("Digite o intervalo para gerar valor aleatorio no vetor: ");
    scanf("%d", &inte);

    for(i=0; i<TAM; i++){
        v[i]=(rand()%(inte+1));
    }

    printf("\tVetor\n");
    for (i=0; i<TAM; i++){
        printf("[%d]",v[i]);
    }

    for(i=0; i<TAM-1; i++){
        for(j=i+1; j<TAM; j++){
            if (v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("\n\n\tVetor ordenado\n");
    for (j=0; j<TAM; j++){
        printf("[%d]",v[j]);
    }


    return 0; 
}