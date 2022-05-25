/* Escreva um programa que troque o valor de dois números utilizando ponteiros. */ 

#include <stdio.h>

int main(){

  int a, b, *pa = NULL, *pb = NULL;

  system("clear");

  pa = &a;
  pb = &b;

  printf("entre com valor A: ");
  scanf("%d", pa);
  printf("entre com valor B: ");
  scanf("%d", pb);

  *pb = *pa ^ *pb;
  *pa = *pb ^ *pa;
  *pb = *pa ^ *pb;

  printf("A: %d\nB: %d\n\n", *pa, *pb);
  
  return 0;
}