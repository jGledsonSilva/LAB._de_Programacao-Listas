/* Faça um programa em C que leia uma string do usuário e informe a quantidade de caracteres da string fornecida. Não use a função strlen(). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char str[100];
    int i;

    printf("Digite a string: ");
    scanf("%100[^\n]", str);

    for(i=0; str[i]!='\0'; i++);
    printf("Tem %d caracteres.\n\n", i);

    return 0;
}