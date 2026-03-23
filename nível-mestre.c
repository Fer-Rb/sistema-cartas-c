#include <stdio.h>
#include <string.h>

int main() {
    // Variaveis que  iram guardar o valor de cada uma das comparações, somas e escolhas
    int escolha, escolha2, ponto, ponto2;
    float soma = 0, soma2 = 0;

    // Declaração de variáveis da Carta 1
    char nome_pais[20];
    int populacao, pontosTuristicos;
    float area, PIB, densidade;

    // Declaração de variáveis da Carta 2
    char nome_pais2[20];
    int populacao2, pontosTuristicos2;
    float area2, PIB2, densidade2;

    printf("****Carta 1****\n\n");

    printf("Digite o nome do País:\n");
    fgets(nome_pais, sizeof(nome_pais), stdin);
    nome_pais[strcspn(nome_pais, "\n")] = '\0'; // remove o \n

    printf("Digite a área:\n");
    scanf("%f", &area);
    getchar(); // limpa o Enter

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao);
    getchar(); // limpa o Enter deixado no buffer

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);
    getchar();

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &PIB);
    getchar();

    printf("\n****Carta 2****\n\n");

    printf("Digite o nome do País:\n");
    fgets(nome_pais2, sizeof(nome_pais2), stdin);
    nome_pais2[strcspn(nome_pais2, "\n")] = '\0';

    printf("Digite a área:\n");
    scanf("%f", &area2);
    getchar();

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);
    getchar();

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &PIB2);
    getchar();

    // cálculo da densidade
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    

    // Primeiro3 menu
    printf("\n*****Escolha de dois atributos*****\n");
    printf("Escolha do primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Segundo menu sem o primeiro atributo
    if(escolha == 1){
    printf("Escolha do segundo atributo:\n");
    //printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    }
    else if(escolha == 2){
    printf("Escolha do segundo atributo:\n");
    printf("1. População\n");
    //printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    }
    else if(escolha == 3){
    printf("Escolha do segundo atributo:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    //printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    }
    else if(escolha == 4){
    printf("Escolha do segundo atributo:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    //printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    }
    else if(escolha == 5){
    printf("Escolha do segundo atributo:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    //printf("5. Densidade\n");
    }
    else{
    printf("Opção Inválida\n");
    }
    printf("Escolha: ");
    scanf("%d", &escolha2);


    //  Switch do primeiro menu, vai ser impresso também o resultado da comparação para teste 
    switch (escolha)
    {
    case 1:
    ponto = populacao > populacao2 ? 1 : 0;
    if (ponto == 1){
        printf("A carta 1 ganhou, valor: %d\n", populacao);
    }
    else if (ponto == 0){
        printf("A carta 2 ganhou, valor: %d\n", populacao2);
    }
    else
    {
        printf("Empate\n");
    }
    
    
    soma += populacao;
    soma2 += populacao2;
    break;
    
    case 2:
    ponto = pontosTuristicos > pontosTuristicos2 ? 1: 0;
    if (ponto == 1){
        printf("A carta 1 ganhou, valor: %d\n", pontosTuristicos);
    }
    else if (ponto == 0){
        printf("A carta 2 ganhou, valor: %d\n", pontosTuristicos2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += pontosTuristicos;
    soma2 += pontosTuristicos2;
    break;

    case 3:
    ponto = area > area2 ? 1 : 0;
    if (ponto == 1){
        printf("A carta 1 ganhou, valor: %f\n", area);
    }
    else if (ponto == 0){
        printf("A carta 2 ganhou, valor: %f\n", area2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += area;
    soma2 += area2;
    break;

    case 4:
    ponto = PIB > PIB2 ? 1 : 0;
    if (ponto == 1){
        printf("A carta 1 ganhou, valor: %f\n", PIB);
    }
    else if (ponto == 0){
        printf("A carta 2 ganhou, valor: %f\n", PIB2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += PIB;
    soma2 += PIB2;
    break;

    case 5:
    ponto = densidade < densidade2 ? 1 : 0;
    if (ponto == 1){
        printf("A carta 1 ganhou, valor: %f\n", densidade);
    }
    else if (ponto == 0){
        printf("A carta 2 ganhou, valor: %f\n", densidade2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += densidade;
    soma2 += densidade2;
    break;

    default:
        printf("Opção Inválida\n");
    }

    // Switch do segundo menu

    switch (escolha2)
    {
    case 1:
    ponto2 = populacao > populacao2 ? 1 : 0;
    if (ponto2 == 1){
        printf("A carta 1 ganhou, valor: %d\n", populacao);
    }
    else if (ponto2 == 0){
        printf("A carta 2 ganhou, valor: %d\n", populacao2);
    }
    else
    {
        printf("Empate\n");
    }
    
    soma += populacao;
    soma2 += populacao2;
    break;
    
    case 2:
    ponto = pontosTuristicos > pontosTuristicos2 ? 1: 0;
    if (ponto2 == 1){
        printf("A carta 1 ganhou, valor: %d\n", pontosTuristicos);
    }
    else if (ponto2 == 0){
        printf("A carta 2 ganhou, valor: %d\n", pontosTuristicos2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += pontosTuristicos;
    soma2 += pontosTuristicos2;
    break;

    case 3:
    ponto = area > area2 ? 1 : 0;
    if (ponto2 == 1){
        printf("A carta 1 ganhou, valor: %f\n", area);
    }
    else if (ponto2 == 0){
        printf("A carta 2 ganhou, valor: %f\n", area2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += area;
    soma2 += area2;
    break;

    case 4:
    ponto = PIB > PIB2 ? 1 : 0;
    if (ponto2 == 1){
        printf("A carta 1 ganhou, valor: %f\n", PIB);
    }
    else if (ponto2 == 0){
        printf("A carta 2 ganhou, valor: %f\n", PIB2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += PIB;
    soma2 += PIB2;
    break;

    case 5:
    ponto = densidade < densidade2 ? 1 : 0;
    if (ponto2 == 1){
        printf("A carta 1 ganhou, valor: %f\n", densidade);
    }
    else if (ponto2 == 0){
        printf("A carta 2 ganhou, valor: %f\n", densidade2);
    }
    else
    {
        printf("Empate\n");
    }

    soma += densidade;
    soma2 += densidade2;
    break;

    default:
        printf("Opção Inválida\n");
    }

    // Imprime o resultado da soma só pra teste


    printf("Soma Carta 1: %f\n",soma);
    printf("Soma Carta 2: %f\n", soma2);

    //Essa é a parte final do código onde vai exibir todos as informações solicitadas
    //Fiz de uma maneira repetitiva, para treinar a escrita mas também achei mais fácil com o que eu sei até agora 


    printf("*****RESULTADO FINAL*****\n\n");
    if (soma > soma2){
        printf("Nome do País vencedor: %s\n", nome_pais);
        switch (escolha) {
    case 1:
        printf("População: %s = %d | %s = %d\n", nome_pais, populacao, nome_pais2, populacao2);
        break;
    case 2:
        printf("Pontos Turísticos: %s = %d | %s = %d\n", nome_pais, pontosTuristicos, nome_pais2, pontosTuristicos2);
        break;
    case 3:
        printf("Área: %s = %.2f | %s = %.2f\n", nome_pais, area, nome_pais2, area2);
        break;
    case 4:
        printf("PIB: %s = %.2f | %s = %.2f\n", nome_pais, PIB, nome_pais2, PIB2);
        break;
    case 5:
        printf("Densidade: %s = %.2f | %s = %.2f\n", nome_pais, densidade, nome_pais2, densidade2);
        break;
}

switch (escolha2) {
    case 1:
        printf("População: %s = %d | %s = %d\n", nome_pais, populacao, nome_pais2, populacao2);
        break;
    case 2:
        printf("Pontos Turísticos: %s = %d | %s = %d\n", nome_pais, pontosTuristicos, nome_pais2, pontosTuristicos2);
        break;
    case 3:
        printf("Área: %s = %.2f | %s = %.2f\n", nome_pais, area, nome_pais2, area2);
        break;
    case 4:
        printf("PIB: %s = %.2f | %s = %.2f\n", nome_pais, PIB, nome_pais2, PIB2);
        break;
    case 5:
        printf("Densidade: %s = %.2f | %s = %.2f\n", nome_pais, densidade, nome_pais2, densidade2);
        break;
}
    printf("Soma: Carta 1 = %.2f | Carta 2: %.2f\n", soma, soma2);

    printf("🏆 %s venceu\nPARABÉNS🎉🎉🎉🎉🎉\n", nome_pais);

    }

    else if(soma < soma2){
        printf("Nome do País vencedor: %s\n", nome_pais2);
        switch (escolha) {
    case 1:
        printf("População: %s = %d | %s = %d\n", nome_pais, populacao, nome_pais2, populacao2);
        break;
    case 2:
        printf("Pontos Turísticos: %s = %d | %s = %d\n", nome_pais, pontosTuristicos, nome_pais2, pontosTuristicos2);
        break;
    case 3:
        printf("Área: %s = %.2f | %s = %.2f\n", nome_pais, area, nome_pais2, area2);
        break;
    case 4:
        printf("PIB: %s = %.2f | %s = %.2f\n", nome_pais, PIB, nome_pais2, PIB2);
        break;
    case 5:
        printf("Densidade: %s = %.2f | %s = %.2f\n", nome_pais, densidade, nome_pais2, densidade2);
        break;
}

switch (escolha2) {
    case 1:
        printf("População: %s = %d | %s = %d\n", nome_pais, populacao, nome_pais2, populacao2);
        break;
    case 2:
        printf("Pontos Turísticos: %s = %d | %s = %d\n", nome_pais, pontosTuristicos, nome_pais2, pontosTuristicos2);
        break;
    case 3:
        printf("Área: %s = %.2f | %s = %.2f\n", nome_pais, area, nome_pais2, area2);
        break;
    case 4:
        printf("PIB: %s = %.2f | %s = %.2f\n", nome_pais, PIB, nome_pais2, PIB2);
        break;
    case 5:
        printf("Densidade: %s = %.2f | %s = %.2f\n", nome_pais, densidade, nome_pais2, densidade2);
        break;
}
    printf("Soma: Carta 1 = %.2f | Carta 2: %.2f\n", soma, soma2);

    printf("🏆 %s venceu\nPARABÉNS🎉🎉🎉🎉🎉\n", nome_pais2);

    }
    
    else{
        printf("⚖️ Empate no jogo\n");
    }
    

    return 0;
} 