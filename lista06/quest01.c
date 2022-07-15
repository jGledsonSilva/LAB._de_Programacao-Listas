#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

struct aluno{
int tm;
int *pv;
float media;
}; 

int main(){
  int sm = 0;

  system("clear");

  srand(time(NULL));
  
  struct aluno n;
  printf("Digite o tamanho: ");
  scanf("%d", &n.tm);

  n.pv = malloc(n.tm * sizeof(int));
  
  if (!n.pv){
    puts("erro de solicitação da memoria!\n\n");
    exit(1);
  }

  printf("o valor: ");
  for(int i = 0; i < n.tm; i++){
    *(n.pv + i) = rand() % TAM;
    printf("[%d]", *(n.pv + i));
    sm += *(n.pv + i);
  }
  
  n.media = ((float) sm) / n.tm;

  printf("\n\nA media: %.2f\n\n", n.media);
  
  return 0;
}

