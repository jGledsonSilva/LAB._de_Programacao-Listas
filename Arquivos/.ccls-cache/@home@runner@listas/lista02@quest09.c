/* A serie de Fibonacci e formada pela seguinte sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a serie de Fibonacci ate o vigesimo termo. */ 

#include <stdio.h>

int main(){

  int a=0, b=0, c=1, i;

  printf("Sequência Fibonacci até o  20º termo: \n%d \n%d", b, c);

  for(i=1; i<20;i++){
    a = b;
    b = c;
    c = a + b;
    printf("\n%d",c);
  }
  printf("\n"); 
  return 0;
}