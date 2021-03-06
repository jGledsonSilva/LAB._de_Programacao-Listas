/* Faça um programa que gere uma matriz bidimensional com elementos aleatórios e receba do usuário um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define t 3
#define M 10

int main(){
  
  int x, cont, m[t][t];
  srand(time(NULL));
  
  system("clear");

  printf("\nDigite um valor inteiro: ");
  scanf("%d", &x);

  for(int i = 0; i<t; i++){
    for(int j = 0; j<t; j++){
      m[i][j] = rand()%M;
      printf("[%d]", m[i][j]);
    }
    puts("");
  }
  for(int i = 0; i<t; i++){
    for(int j = 0; j<t; j++){
      if(m[i][j]==x){
          cont++;
      }
    }
  }

  printf("\nO valor %d aparece %d vezes.\n\n", x, cont);

  return 0;
}