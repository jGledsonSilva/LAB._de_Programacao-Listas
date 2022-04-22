/* Construir um programa que apresente como resultado o fatorial dos valores ımpares situados na faixa
numero de 1 a 10. */

#include <stdio.h>

int main(){

  int f=1, i, impa;

  for(i=1; i<=10; i++){
    if(i%2!=0){
        impa=i;
    }
    printf("\nO fatorial de %d! é = %d\n\n", impa, f);
  }
 // for(i=1; 1<=10; i++)
  
  
  return 0;
}