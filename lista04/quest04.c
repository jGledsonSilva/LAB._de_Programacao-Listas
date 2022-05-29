/* Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste
o vetor com tipos de dados diferentes, analise os endereços. O que voce observou? */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(){    
    
    int vi[TAM], *pvi = NULL;
    float vf[TAM], *pvf = NULL;
    char vc[TAM], *pvc = NULL;

    system("clear");

    pvi = vi;
    pvf = vf;
    pvc = vc;

    for (int i = 0; i < TAM; i++){
        printf("Digite um valor int: ");
        scanf("%d", pvi + i);
    }puts("");
    for (int i = 0; i < TAM; i++){
        printf("Digite um valor float: ");
        scanf("%f", pvf + i);
    }puts("");
    for (int i = 0; i < TAM; i++){
        printf("Digite um valor char: ");
        scanf("%c", pvc + i);
        getchar();
    }puts("");

    for (int i = 0; i < TAM; i++){
        printf("Valor int: [%p] %d\n", pvi + i, *(pvi + i));
    }puts("");
    for (int i = 0; i < TAM; i++){
        printf("Valor float: [%p] %.2f\n", pvf + i, *(pvf + i));
    }puts("");
    for (int i = 0; i < TAM; i++){
        printf("Valor char: [%p] %c\n", pvc + i, *(pvc + i));
    }

    return 0;
}