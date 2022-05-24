#include <stdio.h>

int main(){

  int a;
  printf("Digite um valor inteiro decimal: ");
  scanf("%d", &a);
  printf("Hexadecimal: %X\n", a);
  printf("Octal: %o\n\n", a);
  return 0;
}