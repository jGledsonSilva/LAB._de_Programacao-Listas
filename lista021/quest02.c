/* Refa ̧ca o programa da Quest ̃ao 1, utilizando a estrutura de repeti ̧c ̃ao com teste no final. */

#include <stdio.h>

int main () {

  int num;
  int e = 0;

  do {
    printf("Digite um valor de 1 ate 7 ou digite o valor 0 para sair: ");
    scanf("%d", &num);
    
    switch(num){

      case 1:
        printf("\n\t\tCorresponde á domingo\n\n");
        e=0;
      break;

      case 2:
        printf("\n\t\tCorresponde á segunda-feira\n\n");
        e=0;
      break;

      case 3:
        printf("\n\t\tCorresponde á treça-feira\n\n");
        e=0;
      break;

      case 4:
        printf("\n\t\tCorresponde á quarta-feira\n\n");
        e=0;
      break;

      case 5:
        printf("\n\t\tCorresponde á quinta-feira\n\n");
        e=0;
      break;

      case 6:
        printf("\n\t\tCorresponde á sexta-feira\n\n");
        e=0;
      break;

      case 7:
        printf("\n\t\tCorresponde á sábado\n\n");
        e=0;
      break;

      case 0:
        printf("\n\t\tFim da execulção.\n\n");
        e=1;
      break;
    
      default: printf("\n\tNenhuma opção selencionada\n\n");
      e=0;
    }    
  }while (e<1);
  return 0;
}