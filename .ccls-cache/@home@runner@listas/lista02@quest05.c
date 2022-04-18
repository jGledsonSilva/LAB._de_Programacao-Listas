#include <stdio.h>

int main(){

  int num, maior=-1, menor;

  printf("digite um valor ou digite 0 para sair:");
  scanf("%d",&num);

  while (num != 0){
    printf("\ndigite um valor ou digite 0 para sair:");
    scanf("%d",&num);

    if (num>maior){
      maior = num;
    }
    else menor = num;
  }

  printf("\nO numero maior é: %d e o menor é: %d.\n\n", maior, menor);
  
  return 0;
}