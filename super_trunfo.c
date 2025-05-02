#include <stdio.h>

// Desafio Super Trunfo - Introdução à programação de computadores (Temas 1 e 2)
// Karina Salvadeo Pereira (Engenharia de software)

int main() {
    // Variáveis para armazenar os dados dos dois países
    char nomePais1[100], nomePais2[100]; // Nomes dos países
    int pop1, pop2, pts1, pts2;          // População e pontos turísticos
    float area1, area2, pib1, pib2;      // Área e PIB
    float dens1, dens2;                  // Densidade demográfica (calculada)

    // Entrada de dados do primeiro país
    printf("Informe os dados do primeiro país:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais1); // Lê o nome completo do país
    printf("População: ");
    scanf("%d", &pop1); // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê a área
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1); // Lê o PIB
    printf("Pontos Turísticos: ");
    scanf("%d", &pts1); // Lê os pontos turísticos

    // Entrada de dados do segundo país
    printf("\nInforme os dados do segundo país:\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", nomePais2); // Lê o nome completo do país
    printf("População: ");
    scanf("%d", &pop2); // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &area2); // Lê a área
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2); // Lê o PIB
    printf("Pontos Turísticos: ");
    scanf("%d", &pts2); // Lê os pontos turísticos

    // Calcula a densidade demográfica (população / área)
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    // Variáveis para armazenar as escolhas e os valores comparados
    int atributo1, atributo2; // Opções escolhidas pelo usuário
    float val1_1 = 0, val2_1 = 0; // Valores do primeiro atributo
    float val1_2 = 0, val2_2 = 0; // Valores do segundo atributo
    float soma1 = 0, soma2 = 0;   // Soma dos valores para cada país

    // Menu para o usuário escolher o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Menu para o usuário escolher o segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        if (atributo1 != 1) printf("1 - População\n");
        if (atributo1 != 2) printf("2 - Área\n");
        if (atributo1 != 3) printf("3 - PIB\n");
        if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
        if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) printf("Erro: selecione um atributo diferente!\n");
    } while (atributo2 == atributo1);

    // Comparação do primeiro atributo
    printf("\nComparação 1:\n");
    switch (atributo1) {
        case 1: // População
            val1_1 = pop1; val2_1 = pop2;
            printf("População: %s = %d | %s = %d\n", nomePais1, pop1, nomePais2, pop2);
            break;
        case 2: // Área
            val1_1 = area1; val2_1 = area2;
            printf("Área: %s = %.2f | %s = %.2f\n", nomePais1, area1, nomePais2, area2);
            break;
        case 3: // PIB
            val1_1 = pib1; val2_1 = pib2;
            printf("PIB: %s = %.2f | %s = %.2f\n", nomePais1, pib1, nomePais2, pib2);
            break;
        case 4: // Pontos turísticos
            val1_1 = pts1; val2_1 = pts2;
            printf("Pontos Turísticos: %s = %d | %s = %d\n", nomePais1, pts1, nomePais2, pts2);
            break;
        case 5: // Densidade demográfica
            val1_1 = dens1; val2_1 = dens2;
            printf("Densidade Demográfica: %s = %.2f | %s = %.2f\n", nomePais1, dens1, nomePais2, dens2);
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Comparação do segundo atributo
    printf("\nComparação 2:\n");
    switch (atributo2) {
        case 1: // População
            val1_2 = pop1; val2_2 = pop2;
            printf("População: %s = %d | %s = %d\n", nomePais1, pop1, nomePais2, pop2);
            break;
        case 2: // Área
            val1_2 = area1; val2_2 = area2;
            printf("Área: %s = %.2f | %s = %.2f\n", nomePais1, area1, nomePais2, area2);
            break;
        case 3: // PIB
            val1_2 = pib1; val2_2 = pib2;
            printf("PIB: %s = %.2f | %s = %.2f\n", nomePais1, pib1, nomePais2, pib2);
            break;
        case 4: // Pontos turísticos
            val1_2 = pts1; val2_2 = pts2;
            printf("Pontos Turísticos: %s = %d | %s = %d\n", nomePais1, pts1, nomePais2, pts2);
            break;
        case 5: // Densidade demográfica
            val1_2 = dens1; val2_2 = dens2;
            printf("Densidade Demográfica: %s = %.2f | %s = %.2f\n", nomePais1, dens1, nomePais2, dens2);
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Ajusta os valores se o atributo for densidade (menor valor vence)
    if (atributo1 == 5) val1_1 *= -1, val2_1 *= -1;
    if (atributo2 == 5) val1_2 *= -1, val2_2 *= -1;

    // Soma os valores dos dois atributos para cada país
    soma1 = val1_1 + val1_2;
    soma2 = val2_1 + val2_2;

    // Exibe o resultado final
    printf("\nResultado final:\n");
    printf("%s - Soma: %.2f\n", nomePais1, soma1);
    printf("%s - Soma: %.2f\n", nomePais2, soma2);

    if (soma1 > soma2) {
        printf("Vitória de %s!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("Vitória de %s!\n", nomePais2);
    } else {
        printf("Empate!\n");
    }

    return 0; // Fim do programa
}
