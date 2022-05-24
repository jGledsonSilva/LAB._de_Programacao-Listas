/* Elaborar um programa que mostre os resultados da tabuada de um numero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */

#include <stdio.h>

int main(){

  int i, a;
  printf("Qual a tabuada de multipacação: ");
  scanf("%d", &a);

  for(i=0; i<=10; i++){
    printf("%i x %d = %d\n", i, a, i*a);
  }
  
  return 0;
}