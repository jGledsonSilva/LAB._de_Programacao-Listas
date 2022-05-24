/* Para que a divisao entre 2 numeros possa ser realizada, o divisor nao pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisao do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que nao deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida. */

#include <stdio.h>

int main(){

  float result, a, b;

  printf("Digite um numero: ");
  scanf("%f", &a);
  
  while(b==0){
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    
    result = b==0? printf("\nO segudo numero não pode ser nulo(0)!\n"): a/b;
  }
  printf("O resultado da divisão de %.2f/%.2f é de: %.2f\n\n", a, b, result);
  
  return 0;
}