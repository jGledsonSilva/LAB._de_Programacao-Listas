/* Faça um programa em C que leia duas strings do usuário e informe se elas são iguais. Faça uma versão com o uso da função strcmp() e outra sem. */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compara(char *i, char *j);

int main(){

    char str1[100], str2[100];

    system("clear");
    
    printf("Digite a primeira string: ");
    scanf("%100[^\n]", str1);
    getchar();

    printf("Digite a segunda string: ");
    scanf("%100[^\n]", str2);

    /////////////////////////////////////////função strcmp()////////////////////////////////////////////////
    //strcmp(str1, str2) == 0? puts("As duas strings sao iguais."): puts("As duas strings nao sao iguais.");
    ////////////////////////////////////////////////////////////////////////////////////////////////////////

    compara(str1, str2);

    return 0;
}

void compara(char* i, char* j){
    int result=0;
    while(*i!='\0' || *j!='\0'){
        if(*i == *j){
            i++;
            j++;
        }else if((*i == '\0' && *j != '\0') || (*i != '\0' && *j == '\0') || *i != *j){
            result=1;
            puts("As duas strings nao sao iguais.");
            break;
            }
    }
    if(result==0) puts("As duas strings sao iguais.");
}