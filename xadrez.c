#include <stdio.h>

int main() {
    //movimento da Torre cinco casas para a direita.
    printf("Movimento da Torre. \n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    //Move-se na diagonal. o movimento do Bispo cinco casas na diagonal para cima e à direita.    
    printf("Movimento do Bispo. \n");
    
    int j = 1;
    while (j <= 5) {
        printf("Diagonal cima-direita \n", j);
        j++;
    }

    //Movimento da Rainha oito casas para a esquerda.
    printf("Movimento da Rainha. \n");

    int k = 1;
    do {
        printf("Esquerda \n", k);
        k++;
    } while (k <= 8);

    return 0;
}
