#include <stdio.h>

int main(){

  int converte;
  float d, r, resul;
  printf("\t\t\tconvenção\n\n");
  printf("1 - de Dolar para Real;\n2 - de Real para Dolar;");
  printf("\n\nDigite 1 ou 2 para efetuar a convenção: ");
  scanf("%d", &converte);
  // 1 dolar = 4.70 reais.
  // 1 real = |1 --> 4,70| -> x = 1/4,70 
  //          |x --> 1   |  

  switch(converte){
    case 1:
      printf("\n\t\tDolar para Real\n");
      printf("Digite o valor do Dolar: ");
      scanf("%f", &d);
      resul = d * 4.70;
      printf("A convenção de %.2f em Dolar é de: %.2f em Real.\n\n", d, resul);
      
    break;

    case 2:
      printf("\n\t\tReal para Dolar\n");
      printf("Digite o valor do Real: ");
      scanf("%f", &r);
      resul = r * (1/4.70);
      printf("A convenção de %.2f em Real é de: %.2f em Dolar.\n\n", r, resul);
    break;
    default: printf("\n\tNenhuma opção selencionada\n\n");
  }
  
  return 0;
}