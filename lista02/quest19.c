/* Elaborar um programa que apresente a media aritmetica dos numeros inteiros existentes entre uma
faixa especificada pelo usuario. */

#include <stdio.h>

int main(){

  int soma = 0, quant, num;
  float media;

  printf("\tMédia aritmética\n");
  printf("Digite a quantidade de números para a média: ");
  scanf("%d", &quant);
    
  for(int i =1 ; i<=quant; i++){
    printf("\nDigite o %dº número: ", i);
    scanf("%d", &num);
    soma = soma + num;
  }

  media = ((float) soma) / quant;

  printf("\n\tA média é: %.2f\n\n", media);
  
  return 0;
}