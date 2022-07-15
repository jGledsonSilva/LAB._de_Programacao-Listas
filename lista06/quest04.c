#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100
//#define TAM 10


struct med{
int tm;
float *pv;
float media;
float maior;
float menor;
}; 

float media(int *, int);
//void imprimirvetor(float *, int);
float random_float();

int main(){
  
  system("clear");
  srand(time(NULL));
  
  struct med *n; 
  int TAM;
  
  printf("digite a quantidade de aluno: ");
  scanf("%d", &TAM);

  n = (struct med *) malloc(TAM * sizeof(struct med));
  
  for (int k=0; k<TAM; k++){

    printf("===\nAluno %d\n",k+1);
    puts("Quantidade de notas: ");
    scanf("%d",&n[k].tm);

    n[k].pv = (float *) malloc(n[k].tm * sizeof(float));

    for (int j=0; j<n[k].tm; j++){
      n[k].pv[j] = random_float();
      printf("Nota %d: %.2f\n", j, n[k].pv[j]);
    }        
  }  
  return 0;
}

float random_float() {
  return ( ( (float)rand() ) / (float)RAND_MAX ) * 10;
}

float media(int *p, int tam){
  float media = 0;
  for(int i = 0; i < tam; i++){
    media += *(p + i);
  }
  media /= tam;
  return media;
}