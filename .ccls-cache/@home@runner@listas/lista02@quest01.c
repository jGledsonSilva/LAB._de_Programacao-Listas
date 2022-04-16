//Implemente um programa que tenha como entrada um numero (1-7) que corresponde a um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terca, quarta, quinta, sexta, sabado). Se o numero lido nao estiver no intervalo 1-7, imprima: “Numero de dia nao valido”. O programa deve permanecer executando ate que o usuario tecle o numero 0. (Utilize obrigatoriamente teste no inıcio).

#include <stdio.h>

int main () {

  int num;
  int e = 0;

  while (e<1){
    printf("Digite um valor de 1 ate 7: ");
    scanf("%d", &num);
    printf("\nPara termina a execução digite 0.\n");
    
    switch(num){

      case 1:
        printf("\nCorresponde á domingo\n\n");
        e=0;
      break;

      case 2:
        printf("\nCorresponde á segunda-feira\n\n");
        e=0;
      break;

      case 3:
        printf("\nCorresponde á treça-feira\n\n");
        e=0;
      break;

      case 4:
        printf("\nCorresponde á quarta-feira\n\n");
        e=0;
      break;

      case 5:
        printf("\nCorresponde á quinta-feira\n\n");
        e=0;
      break;

      case 6:
        printf("\nCorresponde á sexta-feira\n\n");
        e=0;
      break;

      case 7:
        printf("\nCorresponde á sábado\n\n");
        e=0;
      break;

      case 0:
        printf("\nFim da execulção.\n\n");
        e=1;
      break;
    
      default: printf("\n\tNenhuma opção selencionada\n\n");
      e=0;
    }    
  }
  return 0;
}