/* Elaborar um programa que apresente os valores de conversao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a formula de conversao. */

#include <stdio.h>

int main(){

  int c, f;

  for(c=10; c<=100; c+=10){
    f = (9 * c + 160)/5;
    printf("Graus Celsius: %d.\nGraus Fahrenheit: %d.\n\n", c, f);
  }
  
  
  return 0;
}