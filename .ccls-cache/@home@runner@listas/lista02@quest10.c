/* Elabore um programa que apresente os quadrados dos numeros inteiros multiplos de 4 existentes na
faixa de valores de 15 a 90. */

#include <stdio.h>

int main(){

  int quadrado, i;
  for(i=15; i<=90; i++){
    quadrado = i%4==0? printf("O quadrado do %i é: %i\n", i, i*i): i;
  }
  
  return 0;
}