#include <stdio.h>

int main(){

  int hora, minuto, segundo, m, s, mi, soma;
  printf("Digite a quantidade de Horas: ");
  scanf("%d", &hora);
  printf("Digite a quantidade de minutos: ");
  scanf("%d", &minuto);
  printf("Digite a quantidade de segundos: ");
  scanf("%d", &segundo);

  s = hora * 3600;
  m = minuto * 60;
  soma = segundo + s + m;

  printf("Total de segundo é: %ds\n\n", soma);
    
  return 0;
}