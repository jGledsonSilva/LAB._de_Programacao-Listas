#include <stdio.h>

#define LENGTH 8     

int main() {
    
    int vetor[LENGTH];     
        
    for(int i=0; i < LENGTH; i++){
        printf("Entre com o numero %i: ",i+1);
        scanf("%i",&vetor[i]);
    }    
        
    printf("Valores repetidos: ");    
    // Procura os repetidos   
    for(int j = 0; j < LENGTH ; j++) {    
        for(int k = j + 1; k < LENGTH; k++) {    
            if(vetor[j] == vetor[k])    
                printf("%d, ", vetor[k]);    
        }    
    }   
    return 0;
}