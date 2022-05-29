/* Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

int main(){

    char str[TAM], *vstr = NULL;
    int i;

    system("clear");

    vstr = str;

    printf("Digite a string: ");
    scanf("%100[^\n]", vstr);

    for (i = 0; *(vstr + i) != '\0'; i++);    

    printf("O tamanho da string: %d", i);

    return 0;
}