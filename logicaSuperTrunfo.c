#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado[2], estado2[2];
    char codigo[5], codigo2[5];
    char nome[20], nome2[20];

    int pontos_turisticos, pontos_turisticos2;
    int populacao, populacao2;
    float pib, pib2, area, area2;
    float densidade, densidade2, pib_capita, pib_capita2;

    printf("\n========== SUPER TRUNFO ==========\n\n");
    printf("VAMOS INICIAR PELO DESENVOLVIMENTO DAS CARTAS DO JOGO\n");

    // Carta 1
    printf("\nCARTA 1:\n");
    printf("Estado (A-H): ");
    scanf(" %1s", estado);
    printf("Código (A01, B02): ");
    scanf(" %s", codigo);
    printf("Nome: ");
    scanf(" %[^\n]s", nome);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("População: ");
    scanf("%d", &populacao);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Área: ");
    scanf("%f", &area);

    densidade = (area != 0) ? populacao / area : 0;
    pib_capita = (populacao != 0) ? pib / populacao : 0;
    float inverso_densidade = (densidade != 0) ? 1 / densidade : 0;

    float super_poder1 = populacao + area + pib + pontos_turisticos + pib_capita + inverso_densidade;

    // Carta 2
    printf("\nCARTA 2:\n");
    printf("Estado (A-H): ");
    scanf(" %1s", estado2);
    printf("Código (A01, B02): ");
    scanf(" %s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]s", nome2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Área: ");
    scanf("%f", &area2);

    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;
    pib_capita2 = (populacao2 != 0) ? pib2 / populacao2 : 0;
    float inverso_densidade2 = (densidade2 != 0) ? 1 / densidade2 : 0;

    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 + inverso_densidade2;

    // Exibição das cartas
    printf("\n========== EXIBIÇÃO DAS CARTAS ==========\n\n");
    printf("CARTA 1 - Estado: %s | Código: %s | Nome: %s\n", estado, codigo, nome);
    printf("Pontos Turísticos: %d | População: %d | PIB: R$ %.2f bi | Área: %.2f km²\n", pontos_turisticos, populacao, pib, area);
    printf("Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f | Super Poder: %.2f\n", densidade, pib_capita, super_poder1);

    printf("\nCARTA 2 - Estado: %s | Código: %s | Nome: %s\n", estado2, codigo2, nome2);
    printf("Pontos Turísticos: %d | População: %d | PIB: R$ %.2f bi | Área: %.2f km²\n", pontos_turisticos2, populacao2, pib2, area2);
    printf("Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f | Super Poder: %.2f\n", densidade2, pib_capita2, super_poder2);

    // Comparação de atributos
    printf("\n========== COMPARAÇÃO ==========\n");
    char atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0, valor2_carta1 = 0, valor2_carta2 = 0;

    printf("\nEscolha 2 atributos diferentes para a comparação:\n");
    printf("A. Pontos Turísticos\nB. População\nC. PIB\nD. Área\nE. Densidade\nF. PIB per capita\nG. Super Poder\n");

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo: ");
    scanf(" %c", &atributo1);

    // Segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf(" %c", &atributo2);

    // Verificação para garantir que os atributos sejam diferentes
    if (atributo1 == atributo2) {
        printf("\nErro: os atributos devem ser diferentes!\n");
        return 1;  // Encerra o programa caso os atributos sejam iguais
    }

    // Atribuindo valores conforme o atributo escolhido
    if (atributo1 == 'A' || atributo1 == 'a') {
        valor1_carta1 = pontos_turisticos;
        valor1_carta2 = pontos_turisticos2;
    } else if (atributo1 == 'B' || atributo1 == 'b') {
        valor1_carta1 = populacao;
        valor1_carta2 = populacao2;
    } else if (atributo1 == 'C' || atributo1 == 'c') {
        valor1_carta1 = pib;
        valor1_carta2 = pib2;
    } else if (atributo1 == 'D' || atributo1 == 'd') {
        valor1_carta1 = area;
        valor1_carta2 = area2;
    } else if (atributo1 == 'E' || atributo1 == 'e') {
        valor1_carta1 = densidade;
        valor1_carta2 = densidade2;
    } else if (atributo1 == 'F' || atributo1 == 'f') {
        valor1_carta1 = pib_capita;
        valor1_carta2 = pib_capita2;
    } else if (atributo1 == 'G' || atributo1 == 'g') {
        valor1_carta1 = super_poder1;
        valor1_carta2 = super_poder2;
    }

    if (atributo2 == 'A' || atributo2 == 'a') {
        valor2_carta1 = pontos_turisticos;
        valor2_carta2 = pontos_turisticos2;
    } else if (atributo2 == 'B' || atributo2 == 'b') {
        valor2_carta1 = populacao;
        valor2_carta2 = populacao2;
    } else if (atributo2 == 'C' || atributo2 == 'c') {
        valor2_carta1 = pib;
        valor2_carta2 = pib2;
    } else if (atributo2 == 'D' || atributo2 == 'd') {
        valor2_carta1 = area;
        valor2_carta2 = area2;
    } else if (atributo2 == 'E' || atributo2 == 'e') {
        valor2_carta1 = densidade;
        valor2_carta2 = densidade2;
    } else if (atributo2 == 'F' || atributo2 == 'f') {
        valor2_carta1 = pib_capita;
        valor2_carta2 = pib_capita2;
    } else if (atributo2 == 'G' || atributo2 == 'g') {
        valor2_carta1 = super_poder1;
        valor2_carta2 = super_poder2;
    }

    float total1 = valor1_carta1 + valor2_carta1;
    float total2 = valor1_carta2 + valor2_carta2;

    printf("\n========== RESULTADO ==========\n");
    printf("Carta 1 (%s) - Atributos: %.2f e %.2f - Soma: %.2f\n", nome, valor1_carta1, valor2_carta1, total1);
    printf("Carta 2 (%s) - Atributos: %.2f e %.2f - Soma: %.2f\n", nome2, valor1_carta2, valor2_carta2, total2);

    if (total1 > total2) {
        printf("Vencedor: Carta 1 (%s)\n", nome);
    } else if (total1 < total2) {
        printf("Vencedor: Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}