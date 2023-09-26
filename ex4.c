#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void valores(int vetorA[], int numeros) {

    for (int i = 0; i < numeros; i++) {

        if (vetorA[i] < 0) {

            vetorA[i] = 0;
        }

    }
}

int main() {

    int vetorA[25];
    int numeros = 25;

    for (int i = 0; i < 25; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetorA[i]);
    }

    valores(vetorA, numeros);

    printf("Vetor resultante:\n");
    for (int i = 0; i < 25; i++) {
        printf("%d ", vetorA[i]);
    }

    return 0;
}
