/* Faça um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido. */ 

#include <stdio.h>
#define TAM 15

int main(){
  
  float vet[TAM];
  int maior=0, menor=0, soma;

  for(int i=0; i<TAM; i++){
    printf("Digite o valor: ");
    scanf("%f", &vet[i]);
  }

  for(int i=0; i<TAM; i++){
    if(i==0){maior=vet[i];menor=vet[i];}
    if(vet[i]>maior)maior=vet[i];
    else if(vet[i]<menor)menor=vet[i];
  }
  
  printf("maior valor: %d\n", maior);
  printf("menor valor: %d\n", menor);

  soma = maior + menor;

  printf("A soma do maio e o menor: %d\n\n", soma);
    
  return 0;
}
