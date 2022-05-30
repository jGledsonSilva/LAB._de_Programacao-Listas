//laboratorio de programação
// aluno: Jose Gledson da Silva Oliveira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){

    int *pa = NULL, tam, tpar = 0,  b, *pb = NULL;

    pb = &b;
    tam = atoi(argv[1]);
    pa = malloc(tam * sizeof(int));

    system("clear");

    if (!pa){
        puts("erro de solicitação da memoria!\n\n");
        exit(1);
    }
    srand(time(NULL));
    for (int i = 0; i < tam; i++){
        *(pa + i) = rand() % 100;
        tpar = sizeof(*pa);
    }

    printf("o vetor A: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", *(pa + i));
    }puts("");


    for (int i = 0; i < tam; i++){
        if(*(pa + i) % 2 == 0){
            *(pb + i) = *(pa + i);
            printf("%d ", *(pa + i));
        }
        else{
            printf("\nnao tem valor par!\n\n");
            exit(1);
        }
        *(pb + i) = tpar;
    }

    printf("\no vetor B: ");
    for (int i = 0; i < tam; i++){
        if(*(pb + i) != tpar){
            printf("%d ", *(pb + i));
        }
    }puts("");

    free(pa);
    return 0;
}