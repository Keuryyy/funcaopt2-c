#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediatotal(float nota1, float nota2, float nota3, float *media, char letra){
     

     
     if(letra == 'P'){
              
          *media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10; 
     }
     
     else if(letra == 'A'){
          
          *media = (nota1 + nota2 + nota3) / 3;
          
     }
     
     else {
          
          printf("Essa opcao nao eh valida");
          
     }
}

int main(){
     
     float nota1;
     float nota2;
     float nota3;
     float media;
     char letra;
     
     printf("Digite as tres notas do aluno: ");
     scanf("%f" "%f" "%f", &nota1, &nota2, &nota3);
     
     printf("Digite A para calcular a media aritmetica e P para calcular a media ponderada ");
     scanf(" %c", &letra);
     
     mediatotal(nota1, nota2, nota3, &media, letra);
                  if(media >= 0){
                           printf("A media escolhida eh: %.1f", media);
                           }
     return 0;

}
     
     
     
      
