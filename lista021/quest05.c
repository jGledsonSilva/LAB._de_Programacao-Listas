/* Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condicao de termino do programa e quando o usuario digitar zero. */

#include <stdio.h>

int main(){

  int num, maior=-1, menor;

  printf("digite um valor ou digite 0 para sair:");
  scanf("%d",&num);

  while (num != 0){
    printf("\ndigite um valor ou digite 0 para sair:");
    scanf("%d",&num);

    menor = num > maior? maior = num: num;
  }

  printf("\nO numero maior é: %d e o menor é: %d.\n\n", maior, menor);
  
  return 0;
}