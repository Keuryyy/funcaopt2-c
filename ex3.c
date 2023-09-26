#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void num(int valor, int *soma){
     
     *soma = 0;
     
     for(int i = 1; i <= valor; i++){
             
             if(valor % i == 0){
                      
                      *soma += i;
             }
     }
}

int main (){
     
     int soma;
     int valor;
     
     printf("Digite um valor:");
     scanf("%d", &valor);
     
     if (valor >= 0){
               
               num(valor, &soma);
               
               printf("A soma eh: %d", soma);
     }

          
     return 0;
}
               
