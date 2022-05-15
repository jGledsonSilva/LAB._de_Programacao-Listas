/* Escreva um programa que apresente o somatorio de todos os numeros divisıveis por 3 pertencentes ao
intervalo [0,100] e o somatorio de todos os numeros divisıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um laco de repeticao. */

#include <stdio.h>

int main(){

  int i, a, b;

  for(i=0; i<=200; i++){
    if(i<=100){
      a=i;
    }
    else if(i>100 && i<=200){
      b=i; 
    }
    a%3==0? printf("%d é divisível por 3.\n", a): a;
    b%5==0? printf("%d é divisível por 5.\n", b): b; 
  }

  return 0;
}