/* Escreva um programa que concatene duas strings utilizando ponteiros. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100

int main(){

    char str1[TAM], str2[TAM], *pstr1 = NULL, *pstr2 = NULL;
    int i = 0, j = 0;

    system("clear");

    pstr1 = str1;
    pstr2 = str2; 

    printf("Digite a primeira string: ");
    scanf("%100[^\n]", pstr1);
    getchar();

    printf("Digite a primeira string: ");
    scanf("%100[^\n]", pstr2);

    while(*(pstr1 + i) !='\0')i++;
    while(*(pstr2 + j) !='\0'){
        *(pstr1 + i + j) = *(pstr2 + j);
        j++;
    }
    *(pstr1 + i + j) ='\0';

    printf("string: %s.\n\n", pstr1);

    return 0;
}