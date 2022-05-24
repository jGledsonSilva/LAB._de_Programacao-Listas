//Escreva um programa que leia o raio de um cırculo e imprima seu diametro, o valor de sua circunferencia e sua ́area. Use o valor de 3,14159 para ”pi”. Faca cada um destes calculos dentro da instrucoes (ou instrucoes) printf e use o especificador de conversao %f.

#include <stdio.h>

int main(){

  float r, d, circu, area;
  printf("Digite o valor do raio: ");
  scanf("%f", &r);
  printf("O seu diâmetro é: %.2f;\nsua circunferência: %.2f;\nsua área: %.2f\n\n", (r*2), (2*(3.14159) * r), (3.14159 * (r*r)));
  
  return 0;
}