#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct strut{
    float *ponteiroVt;
    int qtd;
    float media;
}

int main (int argc, char *argv[])
{
    struct strut node;
	float *vetor, soma = 0.0, media;
	int tam, aux = 0;

	tam = atoi(argv[1]);

	vetor = malloc(tam * sizeof(float));
	if (!vetor){
		puts("Falha na solitação de memória!");
		exit(1);
	}

	srand(time(NULL));
	for( int i = 0; i < tam; i++ ){
		*(vetor + i) = (float)(rand() % 100) / 100;
		soma += *(vetor + i);
	}

	media = soma/tam;
	
	node.ponteiroVt = vetor;
	node.qtd = tam;
	node.media = media;

	puts("Elementos do vator:");
	while ( aux != tam ){
		printf("%.2f ", node.ponteiroVt[aux]);
		aux++;
	}
	puts("");
	puts("Quantidade de elementos:");
	printf("%.d\n", node.qtd);
	puts("Média:");
	printf("%.2f\n", node.media);
	
	free(vetor);
	
    return 0;
}