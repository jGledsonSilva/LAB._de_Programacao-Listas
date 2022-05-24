//Escreva um programa que leia duas vari ́aveis A e B e efetue a troca //dos valores. O objetivo  ́e que a variavel A passe a conter o valor //de B e a variavel B passe a possuir o valor de A. Apresente os //valores apos a efetivacao do processamento da troca.

#include <stdio.h>

int main(){
  
  int a, b, c; 
  printf("entre com o valorde a\n");
  scanf("%d",&a);
  printf("entre com o valorde b\n");
  scanf("%d",&b);

  c = a;
  a = b;
  b = c;

  printf("a: %d b: %d", a, b);
  return 0;
}