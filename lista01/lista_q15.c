// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%. Sempre sao descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>

int main(){

  float vl, impos, tot, grat, sub;
  int dia;
  printf("Digite o numero de dias trabalhados: ");
  scanf("%d", &dia);

  if(dia <= 10){
    vl = ((float)dia * 50.25);
    impos = vl * 0.1;
    tot = vl - impos;
      printf("\nO valor a ser pago: %.2f\n\n", tot);
  }
  else if((dia > 10)&&(dia <= 20)){
    vl = ((float)dia * 50.25);
    grat = vl * 0.2;
    sub = vl + grat;
    impos = sub * 0.1;
    tot = sub - impos;
      printf("\nO valor a ser pago: %.2f\n\n", tot);
  }
  else if(dia > 20){
    vl = ((float)dia * 50.25);
    grat = vl * 0.3;
    sub = vl + grat;
    impos = sub * 0.1;
    tot = sub - impos;
      printf("\nO valor a ser pago: %.2f\n\n", tot);
  }
  
  return 0;
}