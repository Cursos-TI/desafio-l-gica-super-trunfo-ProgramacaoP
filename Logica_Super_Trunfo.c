#include <stdio.h>

int main() {
    printf("Cartas I e II do Jogo Super Trunfo\n");
    // Acima printf para informando quis cartas estão sendo cadastradas - Nivel Novato tema 2

    
    // Abaixo definição de variáveis para cada atributo da carta - Nivel Novato tema 2
    // Definição da estrutura para as cartas
    typedef struct {
        char estado[3];
        char codigo[5];
        char cidade[12];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
        float SuperPoder;
    } 

    return 0;
}