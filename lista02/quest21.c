/* Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
seus d ́ıgitos individuais.] */

#include <stdio.h>
#include <math.h>
#define TAM 9

int main(){

  unsigned int numero;
  int pali = 1, pos, nc1, nc2;

	printf("Digite um número de %d dígitos: ", TAM);
  scanf("%d", &numero);

	if (numero < pow(10, TAM-1) || numero > pow(10, TAM)-1) {
		printf("Número inválido! \n");
		return 1;
	}

	for (pos=0; pos<TAM/2; pos++) {
		nc1 = (numero % (int) pow(10, pos+1)) / pow(10, pos);
		nc2 = (numero / (int) pow(10, TAM-(pos+1))) % 10;


		if (nc1 != nc2) {
			pali = 0;
			break;
		}
	}

	if (pali) {
		printf("Número dado é palíndromo\n");
	} else {
		printf("Número dado não é palíndromo\n");
	}
  
  return 0;
}