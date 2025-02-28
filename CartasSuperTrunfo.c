#include <stdio.h>

            int main() {
    
            
            char estado[1]; // Variável do tipo Char para armazenar o Código da Carta da Cidade
            char codigodacidade[3]; // Variável do tipo Char para armazenar o Código da Carta da Cidade
            char nome[10]; // Variável do tipo Char para armazenar o Nome da Cidade
            int populacao; // Variável do tipo Int para armazenar a População da Cidade
            float area; // Variável do tipo Float para armazenar a Área da Cidade em Km
            float pib; // Variável do tipo Float para armazenar o PIB da Cidade
            int numeropontoturistico; // Variável do tipo Int para armazenar a Quantidade de Pontos Turísticos da Cidade
            float densidadepopulacional; // Variável do tipo Float para armazenar a Densidade Populacional da cidade
            float pibpercapta; // Variável do tipo Float para armazenar o PIB Per Capta da Cidade


            printf("Desafio Super Trunfo - Países\n"); // Desafio Super Trunfo - Países
            printf("\nTema 1 - Cadastro das Cartas\n"); // Tema 1 - Cadastro das Cartas
             
            printf("\n Carta 1: \n"); //Carta 1

                printf("\nDigite o Estado da Cidade: \n"); // Solicita ao usuário que digite o Estado da cidade
                scanf("%s", estado); //Armazena o codigo da cidade digitado pelo usuário

                printf("\nDigite o Código da Cidade: \n"); // Solicita ao usuário que digite o código da cidade
                scanf("%s", codigodacidade); //Armazena o codigo da cidade digitado pelo usuário

                printf("\nDigite o Nome da Cidade: \n"); // Solicita ao usuário que digite o nome da cidade
                scanf("%s", nome); //Armazena o nome da cidade digitado pelo usuário

                printf("\nDigite a População da Cidade: \n"); // Solicita ao usuário que digite a população da cidade
                scanf("%d", &populacao); //Armazena a população da cidade digitado pelo usuário
        
                printf("\nDigite a Área da Cidade em km: \n"); // Solicita ao usuário que digite a área da cidade
                scanf("%f", &area); //Armazena a área da cidade digitado pelo usuário

                printf("\nDigite o PIB da Cidade: \n"); // Solicita ao usuário que digite o pib da cidade
                scanf("%f", &pib); //Armazena o pib da cidade digitado pelo usuário

                printf("\nDigite o número de Pontos Turísticos da Cidade: \n"); // Solicita ao usuário que digite a quantidade de pontos turísticos da cidade
                scanf("%d", &numeropontoturistico); //Armazena a quantidade de pontos turísticos da cidade digitado pelo usuário

                    densidadepopulacional = populacao / area;
                    pibpercapta = pib / populacao;

                        printf("\nCarta 01: \n"); //Este bloco exibe para o usuário os dados da carta cadastrada
                        printf("Estado: %s\n", estado);
                        printf("Código: %s\n", codigodacidade);
                        printf("Nome: %s\n", nome);
                        printf("População: %d\n", populacao);
                        printf("Área: %.2f km²\n", area);
                        printf("PIB: %.2f bilhões de reais\n", pib);
                        printf("Pontos Turísticos: %d\n", numeropontoturistico);
                        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
                        printf("PIB Per Capta: %.2f reais\n", pibpercapta);
        
        return 0;
        }