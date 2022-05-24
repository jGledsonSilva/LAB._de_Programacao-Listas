#include <stdio.h>

int main(){

  float volume, comprimento, largura, altura;
  printf("Digite o valor do comprimento: ");
  scanf("%f", &comprimento);
  printf("Digite o valor do largura: ");
  scanf("%f", &largura);
  printf("Digite o valor do altura: ");
  scanf("%f", &altura);

  volume = comprimento * largura * altura;

  printf("O volume do retangulo: %.2f\n\n", volume);
  
  return 0;
}