#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void matrizreais(float matriz[3][4]){
    
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite os valores da posição[%d][%d]:", i, j);
            scanf("%f", &matriz [i][j]);
        }
    }
}

void copiar(float matriz[3][4], float vetor[12]){

    int x = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            vetor[x] = matriz[i][j];
            x++;
        }
    }
}

void main(){

    float vetor[12];
    float matriz[3][4];

    matrizreais(matriz);
    copiar(matriz, vetor);

    printf("Valores resultantes:");

    for(int i = 0; i < 12; i++){
    printf("%.1f ", vetor[i]);
    }
}
