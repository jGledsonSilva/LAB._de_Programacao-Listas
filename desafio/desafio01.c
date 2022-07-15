#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bin(int x) {
  if (x == 0)
    return 0;
  else {
    return (bin(x / 2) * 10) | (x % 2);
  }
}
int main() {

  unsigned char armario = 0;
  int opcao, aleatori, desligar, i;
  int quant_arma[8] = {1,2,3,4,5,6,7,8};
  srand(time(NULL));

  do {
    printf("\t(1)Ocupar armario.\n\t(2)Liberar armario.\n\t(3)Sair.");
    printf("\n\nEscolha uma das opcoes:");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        do{
          for(i=0; i<8; i++);
          quant_arma[i] = rand() % 8;
        }while(quant_arma[aleatori] == 0);
        printf("\n%dº ", quant_arma[i]);        
        switch (quant_arma[i]){
          case 1:
            armario |= 128;
          break;
          case 2:
            armario |= 64;
          break;
          case 3:
            armario |= 32;
          break;
          case 4:
            armario |= 16;
          break;
          case 5:
            armario |= 8;
          break;
          case 6:
            armario |= 4;
          break;
          case 7:
            armario |= 2;
          break;
          case 8:
            armario |= 1;
          break;
        }
        quant_arma[aleatori] = 0;
        printf("Armario: %d\n",bin(armario));
        if(bin(armario) == '11111111')
          printf("\ntodos os armarios estao ocupados.\n\n");
        continue;
      break;

      case 2:
        printf("digite o armário: ");
        scanf("%d",&desligar);
        switch(desligar){
          case 1:
            armario &= ~128; 
          break;
          case 2:
            armario &= ~64;
          break;
          case 3:
            armario &= ~32;
          break;
          case 4:
            armario &= ~16;
          break;
          case 5:
            armario &= ~8; 
          break;
          case 6:
            armario &= ~4; 
          break;
          case 7:
            armario &= ~2; 
          break;
          case 8:
            armario &= ~1; 
          break;
        }
        if(bin(armario) == '00000000')
          printf("\ntodos os armários estão livres.\n\n");
        printf("Armario: %d\n",bin(armario));
      break;
      case 3:
        printf("\n\tFim do programa.\n\n");
      break;
      
      default:  printf("\n\tNenhuma opção selencionada\n\n");
    }
  }while (opcao != 3);
  return 0;
}