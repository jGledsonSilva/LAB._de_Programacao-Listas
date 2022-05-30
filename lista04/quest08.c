/* Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

int main(){

    char str[TAM], ca, *pstr = NULL, *pca = NULL;
    int i;

    system("clear");system("clear");

    pstr = str;
    pca = ca;

    printf("Digite a primeira string: ");
    scanf("%100[^\n]", pstr);
    getchar();

    printf("Digite um caracter: ");
    scanf("%c", pca);

    for (i = 0; *(pstr + i) != '\0'; i++);

    *(pstr + i) == pca ? printf("A string contem o caracter fornecido\n"): printf("A string nao contem o caracter fornecido.\n");

    return 0;
}