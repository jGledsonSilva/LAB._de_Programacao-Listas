#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100

void gerarVetor(int *pVetor, int tam, int min, int max);
int maior(int *pVG, int tam);
int menor(int *pVG, int tam);
void min_max(int *pVG, int maior, int menor, int tam);

int main(){

    int tam, vetor, vMaior, vMenor;
    int *pVetor;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    pVetor = (int *) malloc(tam * sizeof(int));

    if(!pVetor){
        printf("Infelizmente não foi possível alocar a memória !");
    }

    gerarVetor(pVetor, tam, MIN, MAX);
    vMaior = maior(pVetor, tam);
    vMenor = menor(pVetor, tam);
    min_max(pVetor, vMaior, vMenor, tam);

    return 0;
}

void gerarVetor(int *pVG, int tam, int min, int max){

    srand(time(NULL));

    for(int i = 0; i < tam; i++){
        *(pVG + i) = min + rand() % max;
    }
}

int maior(int *pVetor, int tam){

    int *pMaior;
    pMaior = pVetor;

    for(int i = 0; i < tam; i++){
        pMaior = (*pMaior < *(pVetor + i)) ? (pVetor + i):pMaior; 
    }
    return *pMaior;
}

int menor(int *pVetor, int tam){

    int *pMenor;
    pMenor = pVetor;

    for(int i = 0; i < tam; i++){
        pMenor = (*pMenor > *(pVetor + i)) ? (pVetor + i):pMenor; 
    }    
    return *pMenor;
}

void min_max(int *pVetor, int maior, int menor, int tam){

    int *xNormalized;

    xNormalized = (int *) malloc(tam * sizeof(int));
    
    if(!xNormalized){
        printf("Infelizmente não foi possível alocar a memória !");
    }

    for(int i = 0; i < tam; i++){
        *(xNormalized + i)= (*(pVetor + i) - menor)/(maior-menor);
    }

    for(int i = 0; i < tam; i++){
       printf("-------------------------\n");
       printf("Valor original: %d\nValor normalizado: %d\n", *(pVetor + i), *(xNormalized + i));
       printf("-------------------------\n");
    }
}