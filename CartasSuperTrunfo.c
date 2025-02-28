#include <stdio.h>

            int main() {
    
            
            char estado1[1], estado2[2]; // Variável do tipo Char para armazenar o Código da Carta da Cidade
            char codigodacidade1[3], codigodacidade2[3]; // Variável do tipo Char para armazenar o Código da Carta da Cidade
            char nome1[10], nome2[10]; // Variável do tipo Char para armazenar o Nome da Cidade
            int populacao1, populacao2; // Variável do tipo Int para armazenar a População da Cidade
            float area1, area2; // Variável do tipo Float para armazenar a Área da Cidade em Km
            float pib1, pib2; // Variável do tipo Float para armazenar o PIB da Cidade
            int numeropontoturistico1, numeropontoturistico2; // Variável do tipo Int para armazenar a Quantidade de Pontos Turísticos da Cidade
            float densidadepopulacional1, densidadepopulacional2; // Variável do tipo Float para armazenar a Densidade Populacional da cidade
            float pibpercapta1, pibpercapta2; // Variável do tipo Float para armazenar o PIB Per Capta da Cidade


            printf("Desafio Super Trunfo - Países\n"); // Desafio Super Trunfo - Países
            printf("\nTema 1 - Cadastro das Cartas\n"); // Tema 1 - Cadastro das Cartas
             
            printf("\n Carta 1: \n"); //Carta 1

                printf("\nDigite o Estado da Cidade: \n"); // Solicita ao usuário que digite o Estado da cidade 1
                scanf("%s", estado1); //Armazena o codigo da cidade 1 digitado pelo usuário

                printf("\nDigite o Código da Cidade: \n"); // Solicita ao usuário que digite o código da cidade 1
                scanf("%s", codigodacidade1); //Armazena o codigo da cidade 1 digitado pelo usuário

                printf("\nDigite o Nome da Cidade: \n"); // Solicita ao usuário que digite o nome da cidade 1
                scanf("%s", nome1); //Armazena o nome da cidade 1 digitado pelo usuário

                printf("\nDigite a População da Cidade: \n"); // Solicita ao usuário que digite a população da cidade 1
                scanf("%d", &populacao1); //Armazena a população da cidade 1 digitado pelo usuário
        
                printf("\nDigite a Área da Cidade em km: \n"); // Solicita ao usuário que digite a área da cidade 1
                scanf("%f", &area1); //Armazena a área da cidade 1 digitado pelo usuário

                printf("\nDigite o PIB da Cidade: \n"); // Solicita ao usuário que digite o pib da cidade 1
                scanf("%f", &pib1); //Armazena o pib da cidade 1 digitado pelo usuário

                printf("\nDigite o número de Pontos Turísticos da Cidade: \n"); // Solicita ao usuário que digite a quantidade de pontos turísticos da cidade 1
                scanf("%d", &numeropontoturistico1); //Armazena a quantidade de pontos turísticos da cidade 1 digitado pelo usuário

                    densidadepopulacional1 = populacao1 / area1; // Calcula a Densidade Populacional da Cidade 1
                    pibpercapta1 = pib1 / populacao1; // Calcula o Pib Per Capta da Cidade 1



            printf("\n Carta 2: \n"); //Carta 2

                printf("\nDigite o Estado da Cidade: \n"); // Solicita ao usuário que digite o Estado da cidade 2
                scanf("%s", estado2); //Armazena o codigo da cidade 2 digitado pelo usuário

                printf("\nDigite o Código da Cidade: \n"); // Solicita ao usuário que digite o código da cidade 2
                scanf("%s", codigodacidade2); //Armazena o codigo da cidade 2 digitado pelo usuário

                printf("\nDigite o Nome da Cidade: \n"); // Solicita ao usuário que digite o nome da cidade 2
                scanf("%s", nome2); //Armazena o nome da cidade 2 digitado pelo usuário

                printf("\nDigite a População da Cidade: \n"); // Solicita ao usuário que digite a população da cidade 2
                scanf("%d", &populacao2); //Armazena a população da cidade 2 digitado pelo usuário
        
                printf("\nDigite a Área da Cidade em km: \n"); // Solicita ao usuário que digite a área da cidade 2
                scanf("%f", &area2); //Armazena a área da cidade 2 digitado pelo usuário

                printf("\nDigite o PIB da Cidade: \n"); // Solicita ao usuário que digite o pib da cidade 2
                scanf("%f", &pib2); //Armazena o pib da cidade 2 digitado pelo usuário

                printf("\nDigite o número de Pontos Turísticos da Cidade: \n"); // Solicita ao usuário que digite a quantidade de pontos turísticos da cidade 2
                scanf("%d", &numeropontoturistico2); //Armazena a quantidade de pontos turísticos da cidade 2 digitado pelo usuário

                    densidadepopulacional2 = populacao2 / area2; // Calcula a Densidade Populacional da Cidade 2
                    pibpercapta2 = pib2 / populacao2; // Calcula o Pib Per Capta da Cidade 2

                        printf("\nCarta 01: \n"); //Este bloco exibe para o usuário os dados da carta cadastrada
                        printf("Estado: %s\n", estado1);
                        printf("Código: %s\n", codigodacidade1);
                        printf("Nome: %s\n", nome1);
                        printf("População: %d\n", populacao1);
                        printf("Área: %.2f km²\n", area1);
                        printf("PIB: %.2f bilhões de reais\n", pib1);
                        printf("Pontos Turísticos: %d\n", numeropontoturistico1);
                        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
                        printf("PIB Per Capta: %.2f reais\n", pibpercapta1);

                        printf("\nCarta 02: \n"); //Este bloco exibe para o usuário os dados da carta cadastrada
                        printf("Estado: %s\n", estado2);
                        printf("Código: %s\n", codigodacidade2);
                        printf("Nome: %s\n", nome2);
                        printf("População: %d\n", populacao2);
                        printf("Área: %.2f km²\n", area2);
                        printf("PIB: %.2f bilhões de reais\n", pib2);
                        printf("Pontos Turísticos: %d\n", numeropontoturistico2);
                        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
                        printf("PIB Per Capta: %.2f reais\n", pibpercapta2);
        
        return 0;
        }