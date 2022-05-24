#include <stdio.h>

int main(){
  int a, x;
  
  printf("\t\tOs calculo:\n");
  printf("1 = (x = 7 + 3*6/2-1)\n");
  printf("2 = (x = 2%%2+2*2-2/2)\n");
  printf("3 = (x = (3*9*(3+(9*3/(3)))))\n\n");
  printf("Qual dos tipos de calculos que deseja: ");
  scanf("%d", &a);
 
  switch(a){
    case 1:
      printf("\nx = 7 + 3*6/2-1\n");
      x = 7 + 3*6/2-1;
      printf("x = %d\n\n", x);
    break;

    case 2: 
      printf("\nx = 2%%2+2*2-2/2\n");
      x = 2%2+2*2-2/2;
      printf("x = %d\n\n", x);
    break;

    case 3: 
      printf("\nx = (3*9*(3+(9*3/(3))))\n");
      x = (3*9*(3+(9*3/(3))));
      printf("x = %d\n\n", x);
    break;
    default: printf("\n\tNenhuma opção selencionada\n");
  }
  return 0;
}
