#include <stdio.h>

int main(){

  int sexo;
  float altura, peso;
  printf("Qual o seu sexo?\n");
  printf("Digite 1 para Masculino ou 2 para Feminino: ");
  scanf("%d", &sexo);
  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  switch (sexo){
    case 1:
      peso = 72.7 * altura - 58;
      printf("\nO peso ideal é de: %.2f\n\n", peso);
    break;

    case 2:
      peso = 62.1 * altura - 44.7;
      printf("\nO peso ideal é de: %.2f\n\n", peso);
    break;
    default: printf("\n\tNenhuma opção selencionada\n");
  }
  return 0;
}