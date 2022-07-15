#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int *pVetor, int tam);
int sum(int *pVetor, int tam);
void mean(int sum, int tam);

int main(int argc, char *argv[]){

    int *pVetor = NULL, soma;
    float media =0;
    int tam;

    tam = atoi(argv[1]);

    pVetor = (int *) malloc(tam * sizeof(int));
    if(!pVetor){
        printf("Infelizmente não foi possíel alocar a memória !");
    }
    gerarVetor(pVetor, tam);
    soma = sum(pVetor,tam);
    mean(soma, tam);
    free(pVetor);
    return 0;
}

void gerarVetor(int *pVetor, int tam){

	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(pVetor + k) = rand() % 100;
        printf("%d\n", *(pVetor + k));
	}
}

int sum(int *pVetor, int tam){
    int sum = 0;
    for(int i = 0; i < tam; i++){
        sum += *(pVetor + i);
    }
    return sum;
}

void mean(int sum, int tam){
    float mean;
    mean = (float)sum /tam; 
    printf("A media dos valores foi de:\n%.2f", mean);
}