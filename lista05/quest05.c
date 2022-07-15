#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  TAM 1000

int main (int argc, char *argv[]) {
	int Tam;
	float *Total_Vetor = NULL, S = 0;

	Tam = atoi(*(argv + 1));
	Total_Vetor = malloc(Tam * sizeof(float));
    puts("\n");
	srand(time(NULL));
  
	for (int k = 0; k < Tam; k++){
		*(Total_Vetor + k) = (rand() % TAM) + (float)(rand() % TAM)/TAM;
		printf("%.2f\t", *(Total_Vetor + k));
		S += *(Total_Vetor + k);
	}

	printf("\nSoma: %.2f\n", S);

	free(Total_Vetor);
	return (0);
}