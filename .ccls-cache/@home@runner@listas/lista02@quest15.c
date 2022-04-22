/* Elaborar um programa que apresente os resultados das potencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7. */

#include <math.h>
#include <stdio.h>

int main(){

  int i, a, x=3;
  for(i=0; i<8; i++){
    a = (int)(pow(x,2)+0.5);
    printf("O resultado é: %d\n", a);
  }
  return 0;
}