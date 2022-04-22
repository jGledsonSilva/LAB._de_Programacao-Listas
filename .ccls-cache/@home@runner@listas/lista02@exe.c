#include <stdio.h>
#include <stdio.h>
#define LADO 8

// Máximo calculado:              4.294.967.295
// Resposta correta: 18.446.744.073.709.551.615

int main() {
	unsigned long int total=0;

	unsigned long int ultimoQuadro=1;
	int area = LADO*LADO;

	printf("Conta grãos\n ");

	int quadroAtual;
	for (quadroAtual = 0; quadroAtual < area; quadroAtual++) {
		total += ultimoQuadro;
		ultimoQuadro = ultimoQuadro << 1;
		printf("Total atual: %lu\n", total);
	}

	printf("Total: %lu\n", total);
}