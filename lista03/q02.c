/* Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de entrada contém o caracter fornecido. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char str[100], caracter;
    int i;

    system("clear");

    printf("Digite a string: ");
    scanf("%100[^\n]", str);
    getchar();

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    for(i=0; str[i]!='\0'; i++);
    str[i]==caracter? printf("A string contem o caracter fornecido\n"):printf("A string nao contem o caracter fornecido.\n");

    return 0;
}