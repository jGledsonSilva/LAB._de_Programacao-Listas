/* Faça um programa que leia uma matriz bidimensional do usuário, de dimensão 3x3, e apresente os elementos da diagonal principal. */

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){

    int mat[TAM][TAM], x;

    system("clear");

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("Digite um valo na posicao [%d][%d]: ", i, j);
            scanf("%d", &x);
            mat[i][j]=x;
        }
    }

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("[%d]", mat[i][j]);
        }
        puts("");
    }

    printf("\nA diagonal principal\n");
    for(int i=0; i<TAM; i++){
        printf("[%d]", mat[i][i]);
    }

    return 0;
}