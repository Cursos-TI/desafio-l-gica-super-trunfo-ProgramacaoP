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
    } Carta;
    Carta CartaI, CartaII;
    // Inicialização das cartas
    CartaI.estado, "A";
    CartaI.codigo, "A01";
    CartaI.cidade, "Salvador";
    CartaI.populacao = 2418000;
    CartaI.area = 693.8;
    CartaI.pib = 21.8;
    CartaI.pontosTuristicos = 20;
    CartaI.densidadePopulacional = CartaI.populacao / CartaI.area;
    CartaI.pibPerCapita =  CartaI.populacao / CartaI.pib;
    CartaI.SuperPoder = (CartaI.populacao + CartaI.area + CartaI.pib + CartaI.pontosTuristicos + CartaI.densidadePopulacional + CartaI.pibPerCapita) / 2;

    CartaII.estado[0] = 'B'; CartaII.estado[1] = '\0';
    CartaII.codigo, "B01";
    CartaII.cidade, "Fortaleza";
    CartaII.populacao = 2428678;
    CartaII.area = 312.3;
    CartaII.pib = 74.4;
    CartaII.pontosTuristicos = 17;
    CartaII.densidadePopulacional = CartaII.populacao / CartaII.area;
    CartaII.pibPerCapita = CartaII.populacao / CartaII.pib;
    CartaII.SuperPoder = (CartaII.populacao + CartaII.area + CartaII.pib + CartaII.pontosTuristicos + CartaII.densidadePopulacional + CartaII.pibPerCapita) / 2;

    // Cálculo de densidade populacional e PIB per capita
    CartaI.densidadePopulacional =   CartaI.populacao / CartaI.area;
    CartaI.pibPerCapita = CartaI.populacao / CartaI.pib;
    
    CartaII.densidadePopulacional = CartaII.populacao / CartaII.area;
    CartaII.pibPerCapita = CartaII.populacao / CartaII.pib;

    
    

    return 0;
}