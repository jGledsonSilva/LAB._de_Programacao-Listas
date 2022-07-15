#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct disciplina{
    int CH;
    int qtdAlunos;
    int turmas;
    struct professor *professor1;
};


struct professor{
    char nome[50];
    int salario;
};

int main(){
    struct disciplina *disciplina1;
    struct professor *professora;

    disciplina1 = malloc(sizeof(struct disciplina));
    professora = malloc(sizeof(struct professor));


    strcpy(professora->nome, "gledson");
    professora->salario = 15000;

    disciplina1->CH = 10;
    disciplina1->qtdAlunos = 36;
    disciplina1->turmas = 3;
    disciplina1->professor1 = professora;


    printf("O %s ganha %d ", disciplina1->professor1->nome, disciplina1->professor1->salario);
    printf("quantidade de alunos: %d\n turmas: %d\n", disciplina1->qtdAlunos, disciplina1->turmas)

    return 0;
}