#include <stdio.h>

// Desafio Super Trunfo - Países

    //Variaveis-----------------------------------
    int ddd, pontos_turisticos, cep;
    char cidade[51], pais[51], cod_carta[3];
    float habitantes, area, pib, pib_percapita, densidade_populacional;
    //--------------------------------------------


    void entradadedados() {
//Entrada de dados, tudo que sera pedido ao usuario, e guardado em sua respectivas variaveis.
        printf("Registre uma nova Carta...\n");
        printf("\nNome da cidade: ");
        scanf("%s", &cidade);

        printf("\nCodigo da Carta:");
        scanf("%s", &cod_carta);

        printf("\nNumero de pontos turisticos: ");
        scanf("%d", &pontos_turisticos);

        printf("\nCEP da cidade: ");
        scanf("%d", &cep);

        printf("\nNumero de habitantes: ");
        scanf("%f", &habitantes);

        printf("\nCodigo da cidade: ");
        scanf("%d", &ddd);

        printf("\nArea da cidade em quilômetros quadrados: ");
        scanf("%f", &area);

        printf("\nPIB da cidade: ");
        scanf("%f", &pib);

        pib_percapita = pib / habitantes; //calculo de pib per capita
        densidade_populacional = habitantes / area; //calculo de densidade populacional
        printf("Carta cadastrada com sucesso!\n\n");
    };//--------------------------------------

    void carta() {
//saida de dados, que sera mostrada ao usuario.
        printf("\nCidade: %s\n", cidade);
        printf("Codigo da carta: %s\n", cod_carta);
        printf("Pontos Turisticos: %d\n", pontos_turisticos);
        printf("Area: %.3f km²\n", area);
        printf("PIB: %.3f reais\n", pib);
        printf("Habitantes: %.3f\n", habitantes);
        printf("CEP: %d\n", cep);
        printf("PIB per capita: %.3f\n", pib_percapita);
        printf("Densidade populacional por: %.3f pessoas/km²\n", densidade_populacional);
        printf("==================\n\n\n");
    };//----------------------------------------


//esta registrando 4 cartas/cidades.
    void ordem() {
        entradadedados();
        carta();
        entradadedados();
        carta();
        entradadedados();
        carta();
        entradadedados();
        carta();
    }//------------------------------------------

//cada linha de estado, registra 4 cidades, com tudo, esse void chama todas das funcoes em ordem, e registra os 8 estados.
 void on() {
        
    //Estado A
        printf("Estado: A\n");
        ordem();
    //Estado B
        printf("Estado: B\n");
        ordem();
    //Estado C
        printf("Estado: C\n");
        ordem();
    //Estado D
        printf("Estado: D\n");
        ordem();
    //Estado E
        printf("Estado: E\n");
        ordem();
    //Estado F
        printf("Estado: F\n");
        ordem();
    //Estado G
        printf("Estado: G\n");
        ordem();
    //Estado H
        printf("Estado: H\n");
        ordem();
}//-----------------------------------------

//com apenas essa funçao ativando/chamando todas em ordem, dando assim o start do programa.
int main() {
    on();
    printf("☆☆☆ ☆☆ ☆  FIM  ☆ ☆☆ ☆☆☆");
//-----------------------------------------
    return 0;
}
