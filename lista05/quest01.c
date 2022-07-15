/* Escreva um programa que receba dois valores por linha de execu ̧c ̃ao e realize a soma ou multi-
plica ̧c ̃ao, conforme um c ́odigo de opera ̧c ̃ao tamb ́em recebido por linha de execu ̧c ̃ao.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc!=4){
		printf("Formato: \n\t %s <primeiro numero> <segundo numero> <operacoes matematica>\n",argv[0]);
		exit(1);
	}

    if((strcmp(argv[3], "+"))==0){
        printf("%d %s %d = %d\n\n", atoi(argv[1]), argv[3], atoi(argv[2]), atoi(argv[1])+atoi(argv[2]));
    }
    if((strcmp(argv[3], "x"))==0){
        printf("%d %s %d = %d\n\n", atoi(argv[1]), argv[3], atoi(argv[2]), atoi(argv[1])*atoi(argv[2]));
    }

    return 0;
}