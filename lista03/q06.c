/* Faça um programa em C que leia uma string do usuário e a apresente na forma inversa. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10

int main(){

    char str[100], inv[100];
    int i, j, k;

    system("clear");

    printf("Digite uma string: ");
    scanf("%100[^\n]", str);

    for(i=0; str[i]!='\0'; i++);
    k=i-1;

    for(j=0; str[j]!='\0'; j++){
       inv[k]=str[j];
       k--;     
    }inv[j]='\0';

    printf("\nstring: %s\n\n", str);
    
    printf("A string inversa: %s\n\n", inv);
    return 0;
}