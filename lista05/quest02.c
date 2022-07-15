/* Escreva um programa em C que informe o endere ̧co do menor elemento de um vetor de inteiros
gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(int argc, char *argv[]){

    
    if (argc!=2){
		printf("Formato: \n\t %s <tamanho do vetor>\n",argv[0]);
		exit(1);
	}

    int vet[atoi(argv[1])], *pvet=NULL, menor=0;
    srand(time(NULL));
    pvet = vet;
    
    for(int i = 0; i < atoi(argv[1]); i++){
        *(pvet + i) = rand()%TAM;
        printf("[%d]", *(pvet + i));
    }puts("");

    for(int i = 0; i < atoi(argv[1]); i++){
        if(i==0)*(pvet + menor)= *(pvet + i);
        if(*(pvet + i)< *(pvet + menor))*(pvet + menor)= *(pvet + i);
    }

    printf("O menor valor: %d\n", *(pvet + menor));
    printf("O endereco do valor: %p\n\n", (pvet + menor));

    return 0;
}