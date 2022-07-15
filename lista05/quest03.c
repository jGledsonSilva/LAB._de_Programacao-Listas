#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

void maiormenor(int *, int, int, int );

int main(int argc, char *argv[]){

    
    if (argc!=2){
		printf("Formato: \n\t %s <tamanho do vetor>\n",argv[0]);
		exit(1);
	}

    int vet[atoi(argv[1])], vet2[2], *pvet=NULL, *ppvet=NULL, menor = 0, maior = 0, i;
    srand(time(NULL));
    pvet = vet;
    ppvet = vet2;
    
    for(int i = 0; i < atoi(argv[1]); i++){
        *(pvet + i) = rand()%TAM;
        printf("[%d]", *(pvet + i));
    }puts("");

    maiormenor((pvet + i), atoi(argv[1]), menor, maior);

    printf("O menor valor: %d\n", *(pvet + menor));
    printf("O endereco do valor: %p\n", (pvet + menor));
    printf("O maior valor: %d\n", *(pvet + maior));
    printf("O endereco do valor: %p\n\n", (pvet + maior));

    return 0;
}

void maiormenor(int *x, int tam, int y, int z){
    //int maior = 0, menor = 0;

    for(int i = 0; i < tam; i++){
        if(i==0){*(x + z)= *(x + i);*(x + y)= *(x + i);}
        if(*(x + i)< *(x + y))*(x + y)= *(x + i);
        else if(*(x + i)> *(x + z))*(x + z)= *(x + i);
    }
}