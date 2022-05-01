// Vetor invertido

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define INI -200
#define QTD 401

int main(){
    int v[TAM];
    int z[TAM];

    srand(time(NULL));

    // Entrada de dados
    puts("Entre com os dados: ");
    for (int i=0; i<TAM; i++){
        v[i] = (rand() % QTD) + INI;
    }

    // Processamento
    for (int i=0; i<TAM; i++){
        z[TAM-1-i] = v[i];
    }

    // //Saída
    puts("====");
    puts("Dados de entrada: ");
    for (int i=0; i<TAM; i++){
        printf("%d ",v[i]);
    }
    printf("\n\n");
    puts("Vetor invertido: ");
    for (int i=0; i<TAM; i++){
        printf("%d ",z[i]);
    }
    printf("\n");
    
    // printf("RAND_MAX: %d\n",RAND_MAX);

    return 0;
}