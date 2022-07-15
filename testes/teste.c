//laboratorio de programação
// aluno: Jose Gledson da Silva Oliveira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define TAAM 100
#define TAM 10
#define ta 100

void preencherVetor(int *, int );
void vetork(int *, int *, int *, int);
void imprimir(int *, int);

int main(){

    int v[TAM], vk[TAM], t;
    srand(time(NULL));

    system("clear");

    for (int i = 0; i < TAAM; i++){
        preencherVetor(v, TAM);

        printf("o vetor V: ");
        imprimir(v, TAM);
        puts("");

        //printf("\ndigite o valor T: ");
        //scanf("%d", &t);
        t = rand() % ta;

        printf("O valor T: %d\n\n", t);

        vetork(v, vk, &t, TAM);

        printf("o vetor K: ");
        imprimir(vk, TAM);
        printf("\n----------------------------------------------------------\n");
    }

    return 0;
}

void preencherVetor(int *pv, int t){
    for (int i = 0; i < t; i++){
        //printf("digite o valor: ");
        //scanf("%d", (pv + i));
        *(pv + i) = rand() % ta;
    }
}

void vetork(int *pv, int *pk, int *a, int t){
    for (int i = 0; i < t; i++){
        //if(*(pv + i) > *a)*(pk + i) = 1;
        //else {*(pk + i) = 0;}
        *(pk + i) = *(pv + i) > *a ? 1: 0;
    }
}

void imprimir(int *pk, int t){
    for (int i = 0; i < t; i++){
        printf("[%d]", *(pk + i));
    }
}