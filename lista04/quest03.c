/*Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor
valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros. */ 

#include <stdio.h>
#include <stdlib.h>

int main(){

  float a, menor, i = 0, *pa = NULL, *pmenor = NULL;

  pa = &a;
  pmenor = &menor;

  system("clear");

  do{
    printf("\nDigite o valor (Digite [0] para finalizar): ");
    scanf("%f", pa);
    
    if (*pa == 0)break;
    
    ((i == 0) || (*pa < *pmenor))? *pmenor = *pa, i++: *pmenor;
    
    printf("\no menor valor: %.2f\n", *pmenor);   
    
  }while(1);

   printf("\no menor valor: %.2f\n", *pmenor); 
  
  return 0;
}