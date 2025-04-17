#include <stdio.h>

int main() {
    int escolha_opcao_menu = 0;
    int escolha_opcao_submenu1 = 0, escolha_opcao_submenu2 = 0;
    int carta_pc = 0;

    char cidade_jogador[50];
    char cidade_computador[50];

    int valor_jogador_1 = 0, valor_jogador_2 = 0;
    int valor_computador_1 = 0, valor_computador_2 = 0;

    double densidade_jogador_1 = 0, densidade_jogador_2 = 0;
    double densidade_computador_1 = 0, densidade_computador_2 = 0;

    int atributos_jogador = 0;  // Contador para atributos vencidos pelo jogador
    int atributos_computador = 0;  // Contador para atributos vencidos pelo computador
    int atributos_empate = 0;  // Contador para empates

    printf("### Jogo Super Trunfo Cidades ###\n");
    printf("--- Escolha uma carta: \n");
    printf("1. Carta 1 - Belo Horizonte\n");
    printf("2. Carta 2 - Amazonas\n");
    printf("---------- Escolha uma opcao: ");
    scanf("%d", &escolha_opcao_menu);

    // Usando switch para atribuir as cartas
    switch (escolha_opcao_menu) {
        case 1:
            carta_pc = 2;
            snprintf(cidade_jogador, sizeof(cidade_jogador), "Belo Horizonte");
            snprintf(cidade_computador, sizeof(cidade_computador), "Amazonas");
            break;
        case 2:
            carta_pc = 1;
            snprintf(cidade_jogador, sizeof(cidade_jogador), "Amazonas");
            snprintf(cidade_computador, sizeof(cidade_computador), "Belo Horizonte");
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\nCarta Jogador 1: %s\n", cidade_jogador);
    if (escolha_opcao_menu == 1) {
        printf("1. Populacao = 2140000\n");
        printf("2. Area em km = 105500000\n");
        printf("3. PIB = 564000000\n");
        printf("4. Numero de pontos turisticos = 50\n");
        printf("5. Densidade demografica = 0.0000493\n");
    } else {
        printf("1. Populacao = 3800000\n");
        printf("2. Area em km = 150000000\n");
        printf("3. PIB = 813000000\n");
        printf("4. Numero de pontos turisticos = 75\n");
        printf("5. Densidade demografica = 0.0000395\n");
    }

    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &escolha_opcao_submenu1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha_opcao_submenu2);

    // Usando switch para atribuir os atributos do jogador
    switch (escolha_opcao_menu) {
        case 1: // Belo Horizonte
            switch (escolha_opcao_submenu1) {
                case 1:
                    valor_jogador_1 = 2140000;
                    break;
                case 2:
                    valor_jogador_1 = 105500000;
                    break;
                case 3:
                    valor_jogador_1 = 564000000;
                    break;
                case 4:
                    valor_jogador_1 = 50;
                    break;
                case 5:
                    densidade_jogador_1 = 0.0000493;
                    break;
            }

            switch (escolha_opcao_submenu2) {
                case 1:
                    valor_jogador_2 = 2140000;
                    break;
                case 2:
                    valor_jogador_2 = 105500000;
                    break;
                case 3:
                    valor_jogador_2 = 564000000;
                    break;
                case 4:
                    valor_jogador_2 = 50;
                    break;
                case 5:
                    densidade_jogador_2 = 0.0000493;
                    break;
            }
            break;
        case 2: // Amazonas
            switch (escolha_opcao_submenu1) {
                case 1:
                    valor_jogador_1 = 3800000;
                    break;
                case 2:
                    valor_jogador_1 = 150000000;
                    break;
                case 3:
                    valor_jogador_1 = 813000000;
                    break;
                case 4:
                    valor_jogador_1 = 75;
                    break;
                case 5:
                    densidade_jogador_1 = 0.0000395;
                    break;
            }

            switch (escolha_opcao_submenu2) {
                case 1:
                    valor_jogador_2 = 3800000;
                    break;
                case 2:
                    valor_jogador_2 = 150000000;
                    break;
                case 3:
                    valor_jogador_2 = 813000000;
                    break;
                case 4:
                    valor_jogador_2 = 75;
                    break;
                case 5:
                    densidade_jogador_2 = 0.0000395;
                    break;
            }
            break;
        default:
            printf("Opção de carta inválida!\n");
            return 0;
    }

    // Usando switch para atribuir os atributos do computador
    switch (carta_pc) {
        case 1: // Belo Horizonte
            switch (escolha_opcao_submenu1) {
                case 1:
                    valor_computador_1 = 2140000;
                    break;
                case 2:
                    valor_computador_1 = 105500000;
                    break;
                case 3:
                    valor_computador_1 = 564000000;
                    break;
                case 4:
                    valor_computador_1 = 50;
                    break;
                case 5:
                    densidade_computador_1 = 0.0000493;
                    break;
            }

            switch (escolha_opcao_submenu2) {
                case 1:
                    valor_computador_2 = 2140000;
                    break;
                case 2:
                    valor_computador_2 = 105500000;
                    break;
                case 3:
                    valor_computador_2 = 564000000;
                    break;
                case 4:
                    valor_computador_2 = 50;
                    break;
                case 5:
                    densidade_computador_2 = 0.0000493;
                    break;
            }
            break;
        case 2: // Amazonas
            switch (escolha_opcao_submenu1) {
                case 1:
                    valor_computador_1 = 3800000;
                    break;
                case 2:
                    valor_computador_1 = 150000000;
                    break;
                case 3:
                    valor_computador_1 = 813000000;
                    break;
                case 4:
                    valor_computador_1 = 75;
                    break;
                case 5:
                    densidade_computador_1 = 0.0000395;
                    break;
            }

            switch (escolha_opcao_submenu2) {
                case 1:
                    valor_computador_2 = 3800000;
                    break;
                case 2:
                    valor_computador_2 = 150000000;
                    break;
                case 3:
                    valor_computador_2 = 813000000;
                    break;
                case 4:
                    valor_computador_2 = 75;
                    break;
                case 5:
                    densidade_computador_2 = 0.0000395;
                    break;
            }
            break;
    }

    // Comparação 1
    printf("\nComparando %s x %s\n", cidade_jogador, cidade_computador);

    // Comparação dos atributos usando operadores ternários
    if (escolha_opcao_submenu1 == 5) {
        printf("Atributo 1 - Densidade demografica (%.7f) vs Densidade demografica (%.7f)\n", densidade_jogador_1, densidade_computador_1);
        (densidade_jogador_1 < densidade_computador_1) ? atributos_computador++ : 
        (densidade_jogador_1 > densidade_computador_1) ? atributos_jogador++ : atributos_empate++;
    } else {
        printf("Atributo 1 - ");
        (escolha_opcao_submenu1 == 1) ? printf("Populacao ") : 
        (escolha_opcao_submenu1 == 2) ? printf("Area em km ") : 
        (escolha_opcao_submenu1 == 3) ? printf("PIB ") : 
        (escolha_opcao_submenu1 == 4) ? printf("Numero de pontos turisticos ") : 0;

        printf("(%d) vs ", valor_jogador_1);
        (escolha_opcao_submenu1 == 1) ? printf("Populacao ") : 
        (escolha_opcao_submenu1 == 2) ? printf("Area em km ") : 
        (escolha_opcao_submenu1 == 3) ? printf("PIB ") : 
        (escolha_opcao_submenu1 == 4) ? printf("Numero de pontos turisticos ") : 0;
        printf("(%d)\n", valor_computador_1);

        (valor_jogador_1 > valor_computador_1) ? atributos_jogador++ : 
        (valor_jogador_1 < valor_computador_1) ? atributos_computador++ : atributos_empate++;
    }

    // Comparação 2
    if (escolha_opcao_submenu2 == 5) {
        printf("Atributo 2 - Densidade demografica (%.7f) vs Densidade demografica (%.7f)", densidade_jogador_2, densidade_computador_2);
        (densidade_jogador_2 < densidade_computador_2) ? atributos_computador++ : 
        (densidade_jogador_2 > densidade_computador_2) ? atributos_jogador++ : atributos_empate++;
    } else {
        printf("Atributo 2 - ");
        (escolha_opcao_submenu2 == 1) ? printf("Populacao ") : 
        (escolha_opcao_submenu2 == 2) ? printf("Area em km ") : 
        (escolha_opcao_submenu2 == 3) ? printf("PIB ") : 
        (escolha_opcao_submenu2 == 4) ? printf("Numero de pontos turisticos ") : 0;

        printf("(%d) vs ", valor_jogador_2);
        (escolha_opcao_submenu2 == 1) ? printf("Populacao ") : 
        (escolha_opcao_submenu2 == 2) ? printf("Area em km ") : 
        (escolha_opcao_submenu2 == 3) ? printf("PIB ") : 
        (escolha_opcao_submenu2 == 4) ? printf("Numero de pontos turisticos ") : 0;
        printf("(%d)", valor_computador_2);

        (valor_jogador_2 > valor_computador_2) ? atributos_jogador++ : 
        (valor_jogador_2 < valor_computador_2) ? atributos_computador++ : atributos_empate++;
    }

    // Resultado final
    printf("\nCidade vencedor: ");
    if (atributos_jogador > atributos_computador) {
        printf("%s", cidade_jogador);
        printf("\nVenceu com: %d vs %d atributos\n", atributos_jogador, atributos_computador);
    } else if (atributos_computador > atributos_jogador) {
        printf("%s", cidade_computador);
        printf("\nVenceu com: %d vs %d atributos\n", atributos_computador, atributos_jogador);
    } else {
        printf("Empate");
        printf("\nEmpataram com: %d vs %d atributos\n", atributos_jogador, atributos_computador);
    }

    return 0;
}