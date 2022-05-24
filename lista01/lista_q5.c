#include <stdio.h>

int main(){

  float a, taxa, soma;
  printf("Digite o valor da conta a pagar: ");
  scanf("%f", &a);
  taxa = a * 10/100;
  soma = a + taxa;
  printf("O valor total da conta com 10%% de taxa do garçom: %.2f\n\n", soma);
  return 0;
  
}