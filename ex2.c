#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void valor( float valorantigo, float valoratual, float *percentual){
     
     *percentual = ((valoratual - valorantigo) / valorantigo) * 100;
}

int main(){
     
     float valorantigo;
     float valoratual;
     float percentual;
     
     printf("Digite o valor antigo do produto:");
     scanf("%f", &valorantigo);
     
     printf("Digite o valor atual do produto:");
     scanf("%f", &valoratual);
     
     valor(valorantigo, valoratual, &percentual);
     
     printf("O percentual de acrescimo eh: %.1f", percentual); 
     
     return 0;
     
     
}    
