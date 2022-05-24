#include <stdio.h>

int main(){

  int x;
  
  printf("Digite um valor inteiro: ");
  scanf("%d", &x);
  printf("O triplo desse valor é: %d; quadrado: %d; e o meio: %.2f\n\n", x * 3, x * x, (float)x / 2);
  return 0;
  
}