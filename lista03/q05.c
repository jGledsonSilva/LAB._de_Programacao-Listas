/* Faça um programa em C que concatene duas strings recebidas pelo usuário. Construa uma versão com uso da função strcat() e outra sem. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    unsigned int i=0;
    unsigned j=0;
    int concat;
    char str1[100], str2[100];

    system("clear");
    
    printf("Digite a primeira string: ");
    scanf("%100[^\n]", str1);
    getchar();

    printf("Digite a segunda string: ");
    scanf("%100[^\n]", str2);
    
    //////////////////strcat()////////////////////////
    //strcat(str1, str2);
    //////////////////////////////////////////////////

    while(str1[i]!='\0')i++;
    while(str2[j]!='\0'){
        str1[i+j]=str2[j];
        j++;
    }
    str1[i+j]='\0';

    printf("string: %s.\n\n", str1);

    return 0;
}
