/* Escreva um programa que leia um numero inteiro e positivo F e calcule o fatorial deste numero. */

#include <stdio.h>

int main(){

  int i, f = 1, n;

  printf("\nDigite o numero inteiro e positivo para calcular o seu fatorial: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    f = f * i;
  }
  printf("\nO fatorial de %d! é = %d\n\n", n, f);
  
  return 0;
}