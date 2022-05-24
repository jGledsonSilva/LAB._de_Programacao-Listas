//Escreva um programa que leia uma temperatura em graus Celsius e //apresente convertida em graus Fahrenheit. A formula de versao ́e F = //(9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a //temperatura em Celsius.

#include <stdio.h>

int main(){

  int c;
  float f;

  printf("Digite a temperatura em graus Celsius para a convenção em graus Fahrenheit: ");
  scanf("%d", &c);

  f = (9 * (float)c + 160)/5;
  
  printf("A convenção é de: %.2f\n\n", f);
  
  return 0;
}