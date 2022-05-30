/* Escreva um programa que copie uma string para outra usando ponteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

int main(){

    char v1[TAM], v2[TAM], *pv1 = NULL, *pv2 = NULL;

    system("clear");

    pv1 = v1;
    pv2 = v2;

    printf("Digite uma string: ");
    scanf("%[^\n]", pv1);

    strcpy(pv2, pv1);

    printf("string 1: %s\n", pv1);

    puts("O valor da string foi copiado para segunda");

    printf("string 2: %s\n", pv2);

    return 0;
}