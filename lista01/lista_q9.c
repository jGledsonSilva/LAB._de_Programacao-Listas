#include <stdio.h>

int main(){

  int x;
  printf("Digite um numero inteiro: ");
  scanf("%d", &x);

  printf("O antecessor de %d é: %d e o sucessor é: %d\n\n", x, x-1, x+1);
  
  return 0;
}