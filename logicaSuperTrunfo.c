#include <stdio.h>

//Aqui estao as variaveis, algumas com inicializacao
int main () {
    int escolha_opcao_menu = 0, escolha_opcao_submenu = 0;
    int carta_pc = 0;
    int valor_jogador, valor_computador;
    double densidade_jogador, densidade_computador;

    printf("### Jogo Super Trunfo Cidades ###\n");
    printf("--- Escolha uma carta: \n");
    printf("1. Carta 1 - Belo Horizonte\n");
    printf("2. Carta 2 - Amazonas\n");
    printf("---------- Escolha uma opcao: ");
    scanf("%d", &escolha_opcao_menu);

    // Aqui e a escolha das cartas, caso o primeiro jogador escolher a carta 1
    // O computador escolhera a carta dois, ou vise versa
    if (escolha_opcao_menu == 1) {
        carta_pc = 2;
    } else {
        carta_pc = 1;
    }

    // Informacoes sobre as cartas
    // Visualizacao dos atributos da carta 1 e carta 2
    switch (escolha_opcao_menu) {
        case 1:
            printf("\nCarta Jogador 1:\n");
            printf("Cidade: Belo Horizonte\n");
            printf("1. Populacao = 2140000\n");
            printf("2. Area em km = 105500000\n");
            printf("3. PIB = 564000000\n");
            printf("4. Numero de pontos turisticos = 50\n");
            printf("5. Densidade demografica = 0.0000493\n");
            break;
        case 2:
            printf("\nCarta Jogador 1:\n");
            printf("Cidade: Amazonas\n");
            printf("1. Populacao = 3800000\n");
            printf("2. Area em km = 150000000\n");
            printf("3. PIB = 813000000\n");
            printf("4. Numero de pontos turisticos = 75\n");
            printf("5. Densidade demografica = 0.0000395\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("Escolha um atributo: ");
    scanf("%d", &escolha_opcao_submenu);

    // Atributos do jogador 1
    switch (escolha_opcao_menu) {
        case 1:
            switch (escolha_opcao_submenu) {
                case 1: valor_jogador = 2140000; 
                break;
                case 2: valor_jogador = 105500000; 
                break;
                case 3: valor_jogador = 564000000; 
                break;
                case 4: valor_jogador = 50; 
                break;
                case 5: densidade_jogador = 0.0000493; 
                break;
                default: 
                    printf("Atributo invalido!\n");
                    return 1;
            }
            break;
        case 2:
            switch (escolha_opcao_submenu) {
                case 1: valor_jogador = 3800000; 
                break;
                case 2: valor_jogador = 150000000; 
                break;
                case 3: valor_jogador = 813000000; 
                break;
                case 4: valor_jogador = 75; 
                break;
                case 5: densidade_jogador = 0.0000395; 
                break;
                default: 
                    printf("Atributo invalido!\n");
                    return 1;
            }
            break;
    }

    // Atributos do computador
    switch (carta_pc) {
        case 1:
            switch (escolha_opcao_submenu) {
                case 1: valor_computador = 2140000; break;
                case 2: valor_computador = 105500000; break;
                case 3: valor_computador = 564000000; break;
                case 4: valor_computador = 50; break;
                case 5: densidade_computador = 0.0000493; break; 
            }
            break;
        case 2:
            switch (escolha_opcao_submenu) {
                case 1: valor_computador = 3800000; break;
                case 2: valor_computador = 150000000; break;
                case 3: valor_computador = 813000000; break;
                case 4: valor_computador = 75; break;
                case 5: densidade_computador = 0.0000395; break;  
            }
            break;
    }

    // Aqui faz a comparacao e exibe os resultados
    printf("\nResultado: \n");

    if (escolha_opcao_submenu == 1) {  // Populacao
        if (valor_jogador > valor_computador) {
            printf("Vencedor: Jogador 1\n");
            printf("Cidade vencedora: ");
            if (escolha_opcao_menu == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Populacao\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        } else {
            printf("Vencedor: Computador\n");
            printf("Cidade vencedora: ");
            if (carta_pc == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Populacao\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        }
    } else if (escolha_opcao_submenu == 2) {  // Area em km
        if (valor_jogador > valor_computador) {
            printf("Vencedor: Jogador 1\n");
            printf("Cidade vencedora: ");
            if (escolha_opcao_menu == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Area em km\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        } else {
            printf("Vencedor: Computador\n");
            printf("Cidade vencedora: ");
            if (carta_pc == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Area em km\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        }
    } else if (escolha_opcao_submenu == 3) {  // PIB
        if (valor_jogador > valor_computador) {
            printf("Vencedor: Jogador 1\n");
            printf("Cidade vencedora: ");
            if (escolha_opcao_menu == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: PIB\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        } else {
            printf("Vencedor: Computador\n");
            printf("Cidade vencedora: ");
            if (carta_pc == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: PIB\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        }
    } else if (escolha_opcao_submenu == 4) {  // Numero de pontos turisticos
        if (valor_jogador > valor_computador) {
            printf("Vencedor: Jogador 1\n");
            printf("Cidade vencedora: ");
            if (escolha_opcao_menu == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Numero de pontos turisticos\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        } else {
            printf("Vencedor: Computador\n");
            printf("Cidade vencedora: ");
            if (carta_pc == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Numero de pontos turisticos\n");
            printf("Valor da comparação: %d vs %d\n", valor_jogador, valor_computador);
        }
    } else if (escolha_opcao_submenu == 5) {  // Densidade demografica
        if (densidade_jogador < densidade_computador) {
            printf("Vencedor: Jogador 1\n");
            printf("Cidade vencedora: ");
            if (escolha_opcao_menu == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Densidade demografica\n");
            printf("Valor da comparação: %.7f vs %.7f\n", densidade_jogador, densidade_computador);
        } else {
            printf("Vencedor: Computador\n");
            printf("Cidade vencedora: ");
            if (carta_pc == 1) {
                printf("Belo Horizonte\n");
            } else {
                printf("Amazonas\n");
            }
            printf("Atributo utilizado: Densidade demografica\n");
            printf("Valor da comparação: %.7f vs %.7f\n", densidade_jogador, densidade_computador);
        }
    }

    return 0;
}
