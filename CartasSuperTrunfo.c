#include <stdio.h>

            int main() {
    
            char codigodacidade[3]; // Variável do tipo Char para armazenar o Código da Carta da Cidade
            char nome[10]; // Variável do tipo Char para armazenar o Nome da Cidade
            int populacao; // Variável do tipo Int para armazenar a População da Cidade
            float area; // Variável do tipo Float para armazenar a Área da Cidade em Km
            float pib; // Variável do tipo Float para armazenar o PIB da Cidade
            int numeropontoturistico; // Variável do tipo Int para armazenar a Quantidade de Pontos Turísticos da Cidade

            printf("Desafio Super Trunfo - Países\n"); // Desafio Super Trunfo - Países
            printf("\nTema 1 - Cadastro das Cartas\n"); // Tema 1 - Cadastro das Cartas
             
                printf("\nDigite o Código da Cidade: \n"); // Solicita ao usuário que digite o código da cidade
                scanf("%s", codigodacidade); //armazena o codigo da cidade digitado pelo usuário

                printf("\nDigite o Nome da Cidade: \n"); // Solicita ao usuário que digite o nome da cidade
                scanf("%s", nome); //armazena o nome da cidade digitado pelo usuário

                printf("\nDigite a População da Cidade: \n"); // Solicita ao usuário que digite a população da cidade
                scanf("%d", &populacao); //armazena a população da cidade digitado pelo usuário
        
                printf("\nDigite a Área da Cidade em km: \n"); // Solicita ao usuário que digite a área da cidade
                scanf("%f", &area); //armazena a área da cidade digitado pelo usuário

                printf("\nDigite o PIB da Cidade: \n"); // Solicita ao usuário que digite o pib da cidade
                scanf("%f", &pib); //armazena o pib da cidade digitado pelo usuário

                printf("\nDigite o número de Pontos Turísticos da Cidade: \n"); // Solicita ao usuário que digite a quantidade de pontos turísticos da cidade
                scanf("%d", &numeropontoturistico); //armazena a quantidade de pontos turísticos da cidade digitado pelo usuário

                    printf("\nOs dados da carta são: \n"); //Este bloco exibe para o usuário os dados da carta cadastrada
                    printf("Código: %s\n", codigodacidade);
                    printf("Nome: %s\n", nome);
                    printf("População: %d\n", populacao);
                    printf("Área: %f\n", area);
                    printf("PIB: %f\n", pib);
                    printf("Pontos Turísticos: %d\n", numeropontoturistico);
        
        return 0;
        }