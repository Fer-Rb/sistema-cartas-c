#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

// Declaração de variáveis da Carta 1
char estado[20], codigoCarta[4], nomeCidade[50];
int populacao, pontosTuristicos;
float area, PIB, densidade, PPC;

// Declaração de variáveis da Carta 2
char estado2[20], codigoCarta2[4], nomeCidade2[50];
int populacao2, pontosTuristicos2;
float area2, PIB2, densidade2, PPC2;


printf("****Carta 1****\n\n");


printf("Digite o seu estado:\n");
fgets(estado, sizeof(estado), stdin); //tava testando a função de colocar varias palavras em uma linha e elas serem lidas.
//estado[strcspn(estado, "\n")] = '\0';  // Remover \n se necessário

printf("Digite o nome da sua Cidade:\n");
fgets(nomeCidade, sizeof(nomeCidade), stdin);
//nomeCidade[strcspn(nomeCidade, "\n")] = '\0';

printf("Digite o codigo da sua carta:\n");
scanf(" %s", codigoCarta);
getchar(); // limpa o Enter

printf("Digite a quantidade da populacao:\n");
scanf(" %d", &populacao);
getchar(); // limpa o Enter

printf("Digite a area:\n");
scanf(" %f", &area);
getchar(); // limpa o Enter

printf("Digite a quantidade de pontos turisticos:\n");
scanf(" %d", &pontosTuristicos);
getchar(); // limpa o Enter

printf("Digite o Pib da sua cidade:\n");
scanf(" %f", &PIB);
getchar(); // limpa o Enter

printf("****Carta 2****\n\n");


printf("Digite o seu estado:\n");
fgets(estado2, sizeof(estado2), stdin);
//estado2[strcspn(estado2, "\n")] = '\0';// Remover \n se necessário

printf("Digite o nome da sua Cidade:\n");
fgets(nomeCidade2, sizeof(nomeCidade2), stdin); 
//nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

printf("Digite o codigo da sua carta:\n");
scanf(" %s", codigoCarta2);
getchar(); // limpa o Enter

printf("Digite a quantidade da populacao:\n");
scanf(" %d", &populacao2);
getchar(); // limpa o Enter

printf("Digite a area:\n");
scanf(" %f", &area2);
getchar(); // limpa o Enter

printf("Digite a quantidade de pontos turisticos:\n");
scanf(" %d", &pontosTuristicos2);
getchar(); // limpa o Enter

printf("Digite o Pib da sua cidade:\n");
scanf(" %f", &PIB2);
getchar(); // limpa o Enter

densidade = populacao / area;
densidade2 = populacao2 / area2;

PPC = PIB / populacao;
PPC2 = PIB2 / populacao2;
 

printf("*****Resultado Final*****\n\n");
//Caparação das cartas, fiz vários testes.

//POPULAÇAO 


/*  
if(populacao > populacao2){
    printf("Carta 1 - %s, populacao eh de: %d \n Carta 2 - %s, populacao eh: %d \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, populacao, nomeCidade2, populacao2, nomeCidade);
}
else if(populacao < populacao2){
    printf("Carta 1 - %s, populacao eh de: %d \n Carta 2 - %s, populacao eh: %d \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, populacao, nomeCidade2, populacao2, nomeCidade2);
}
else {
    printf("Empate\n");
}
*/


//AREA

/*
if(area > area2){
    printf("Carta 1 - %s, area eh de: %f \n Carta 2 - %s, area eh: %f \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, area, nomeCidade2, area2, nomeCidade);
}
else if(area < area2){
    printf("Carta 1 - %s, area eh de: %f \n Carta 2 - %s, area eh: %f \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, area, nomeCidade2, area2, nomeCidade2);
}
else {
    printf("Empate\n");
}
*/

// PIB 

/*
if(PIB > PIB2){
    printf("Carta 1 - %s, o PIB eh de: %f \n Carta 2 - %s, o PIB eh: %f \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, PIB, nomeCidade2, PIB2, nomeCidade);
}
else if(PIB < PIB2){
    printf("Carta 1 - %s, o PIB eh de: %f \n Carta 2 - %s, o PIB eh: %f \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, PIB, nomeCidade2, PIB2, nomeCidade2);
}
else {
    printf("Empate\n");
}
*/

// DENSIDADE POPULACIONAL 
// Comparação das cartas baseada na densidade populacional

if(densidade < densidade2){
    printf("Carta 1 - %s a densidade eh de: %f \n Carta 2 - %s, a densidade eh: %f \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, densidade, nomeCidade2, densidade2, nomeCidade);
}
else if(densidade > densidade2){
    printf("Carta 1 - %s a densidade eh de: %f \n Carta 2 - %s, a densidade eh: %f \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, densidade, nomeCidade2, densidade2, nomeCidade2);
}
else {
    printf("Empate\n");
}

// Pib Per Capital

/*
if(PPC > PPC2){
    printf("Carta 1 - %s, o PIB Per Capital eh: %f \n Carta 2 - %s, o PIB Per Capital eh: %f \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, PPC, nomeCidade2, PPC2, nomeCidade);
}
else if(PPC < PPC2){
    printf("Carta 1 - %s, o PIB Per Capital eh: %f \n Carta 2 - %s, o PIB Per Capital eh: %f \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, PPC, nomeCidade2, PPC2, nomeCidade2);
}
else {
    printf("Empate\n");
}
*/
//Pontos turisticos

/*
if(pontosTuristicos > pontosTuristicos2){
    printf("Carta 1 - %s, pontos turisticos: %d \n Carta 2 - %s, pontos turisticos: %d \n Resultado: Carta 1 venceu (%s)\n", nomeCidade, pontosTuristicos, pontosTuristicos2, PPC2, nomeCidade);
}
else if(pontosTuristicos < pontosTuristicos2){
    printf("Carta 1 - %s, pontos turisticos: %d \n Carta 2 - %s, pontos turisticos: %d \n Resultado: Carta 2 venceu (%s)\n", nomeCidade, pontosTuristicos, pontosTuristicos2, PPC2, nomeCidade2);
}
else {
    printf("Empate\n");
}
*/

//Fiz o teste de comparação com todos os atributos porem manti para uso no programa só o da comparação da densidade

    return 0;
}
