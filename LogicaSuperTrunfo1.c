#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int populacao1, populacao2;
int numeros1, numeros2;
int b = 0;
int i = 1;
int y = 2;
int jogadores;
double capita1, capita2;
double desindade1, desindade2;
double area1, area2;
double pib1, pib2;
double super1, super2;
char pais[50];
char codigo1, codigo2; 
char estado[50];
char nome1[50], nome2[50];

printf("*** Bem vindo ao jogo Carta Super Trunfo***\n");
printf(" Regras: cada Carta é numerada de A01 , A02\n");
printf("Cada Carta tem uma cidade\n");
printf("Vence a Carta que tiver maior propriedades excerto a densidade Populacional\n");
printf("Vence a densidade com menor numero!!\n");
printf(" Cada Jogador escolha uma!\n");
printf(" Vamos jogar insira os dados de cada carta: \n");

printf("Insira o nome do PAÍS: \n");
scanf("%s", &pais);
printf("Insira o Estado: \n");
scanf("%s", &estado);
printf("Insira o Código da cidade 1:\n");
scanf("%s", &codigo1, &b, &i);
printf("Insira o Nome da cidade 1:\n"); 
scanf("%s", &nome1);
printf("Insira a população: \n");
scanf("%d", &populacao1);
printf("Insira a área: \n");
scanf("%lg", &area1);
printf("Insira o PIB: \n");
scanf("%lg", &pib1);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros1);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo1, b, i);
printf("Cidade 1: %s \n", nome1);
printf("População: %d \n", populacao1);
printf("Área: %lg KM \n", area1);
desindade1 = populacao1 / area1;
printf("Densidade populacional : %lg pessoas/km² \n", desindade1);
printf("PIB: %lg bilhões de reais \n", pib1);
capita1 = populacao1 / pib1;
printf("PIB per Capita : %lg reais \n", capita1);
printf("Numeros de pontos turísticos : %d \n", numeros1);
super1 = populacao1 + area1 + desindade1 + capita1 + numeros1;


printf("Insira o Código da cidade 2:\n");
scanf("%s", &codigo2, &b, &i);
printf("Insira o Nome da cidade 2:\n"); 
scanf("%s", &nome2);
printf("Insira a população: \n");
scanf("%d", &populacao2);
printf("Insira a área: \n");
scanf("%lg", &area2);
printf("Insira o PIB: \n");
scanf("%lg", &pib2);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros2);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo2, b, y);
printf("Cidade 2: %s \n", nome2);
printf("População: %d \n", populacao2);
printf("Área: %lg KM \n", area2);
desindade1 = populacao2 / area2;
printf("Densidade populacional : %lg pessoas/km² \n", desindade1);
printf("PIB: %lg bilhões de reais \n", pib2);
capita2 = populacao2 / pib2;
printf("PIB per Capita : %lg reais \n", capita2);
printf("Numeros de pontos turísticos : %d \n", numeros2);
super2 = populacao2 + area2 + desindade2 + capita2 + numeros2;


printf("Jogador1 Cidade é: %s\n", nome1);
printf("Jogador2 Cidade é: %s\n", nome2);



printf("Escolha o atriputo de comparação:\n");
printf("1-População, 2-area, 3-PIB, 4-pontos turisticos, 5-Pib per capita, 6- Densidade Populacional?\n");
scanf("%d", &jogadores);
int vitoria;
//// 
switch (jogadores)
{
case 1: //população
vitoria = (populacao1 >= populacao2); 
    break;

case 2: //Area
 vitoria = (area1 >= area2);
    break;

case 3: //PIB
vitoria = (pib1 >= pib2);
    break;


case 4: //Pontos Turisticos
 vitoria = (numeros1 >= numeros2);
    break;

case 5: //Pib Per Capita
vitoria = (capita1 >= capita2);
    break;

case 6://Pib Densidade Populacional
 vitoria = (desindade1 <= desindade2);
    break;

default:
      printf("Opção Invalida \n");
    break;
}


if (vitoria == 1) {
        printf("\n  O Jogador 1 venceu com base no atributo selecionado.\n");
    } else {
        printf("\n O Jogador 2 venceu com base no atributo selecionado.\n");
    }




return 0;
}