#include <stdio.h>

int main(){

  int a, b, s, *pa = NULL, *pb = NULL, *ps = NULL;

  system("clear");

  printf("entre com valor: ");
  scanf("%d", &a);
  printf("entre com o segundo valor: ");
  scanf("%d", &b);

  pa = &a;
  pb = &b;
  ps = &s;

  *ps = *pa + *pb;

  printf("%d + %d = %d\n", *pa, *pb, *ps);
  printf("valor nº 1: %p\nvalor nº 2: %p\nvalor da soma: %p\n\n", pa, pb, ps);
  
  return 0;
}