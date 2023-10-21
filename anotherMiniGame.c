#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lista de times:
char times[][16] = {"HOL", "EUA", "ARG", "AUS", "JAP", "CRO", "BRA", "KOR", "ING", "SEN", "FRA", "POL", "MAR", "ESP", "POR", "SUI"};

// Estrutura para representar uma partida
typedef struct {
    char time1[16];
    char time2[16];
    int golsTime1;
    int golsTime2;
} Partida;

// Função para fazer os jogos acontecerem
void jogar(Partida* partida) {
    partida->golsTime1 = 1 + rand() % 4;
    partida->golsTime2 = 1 + partida->golsTime1;

    if (partida->golsTime1 > partida->golsTime2) {
        printf("%s ganhou o jogo por %d a %d\n", partida->time1, partida->golsTime1, partida->golsTime2);
        printf("%s foi eliminado da copa\n", partida->time2);
    } else {
        printf("%s ganhou o jogo por %d a %d\n", partida->time2, partida->golsTime2, partida->golsTime1);
        printf("%s foi eliminado da copa\n", partida->time1);
    }
}

int main() {
    srand(time(NULL));

    // Abrindo o arquivo
    FILE *arq = fopen("resultados.txt", "wt");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    int i, oitavasDeFinal = 1, quartasDeFinal = 1, semiFinal = 1, final = 1;

    // Estrutura para armazenar as partidas
    Partida partida;

    fprintf(arq, "-=-=-=-=Oitavas de final=-=-=-=-");
    fprintf(arq, "\nPartidas jogadas: \n");

    while (oitavasDeFinal < 17) {
        i = rand() % 15;
        strcpy(partida.time1, times[i]);
        strcpy(partida.time2, times[i + 1]);
        jogar(&partida);
        oitavasDeFinal++;
    }
    fprintf(arq, "-=-=-=-=Fim das oitavas de final=-=-=-=-\n\n");

    fprintf(arq, "-=-=-=-=Quartas de final=-=-=-=-");
    fprintf(arq, "\nPartidas jogadas: \n");

    while (quartasDeFinal < 9) {
        i = rand() % 15;
        strcpy(partida.time1, times[i]);
        strcpy(partida.time2, times[i + 1]);
        jogar(&partida);
        quartasDeFinal++;
    }
    fprintf(arq, "-=-=-=-=Fim das quartas de final=-=-=-=-\n\n");

    fprintf(arq, "-=-=-=-=Semi-final=-=-=-=-");
    fprintf(arq, "\nPartidas jogadas: \n");

    while (semiFinal < 5) {
        i = rand() % 15;
        strcpy(partida.time1, times[i]);
        strcpy(partida.time2, times[i + 1]);
        jogar(&partida);
        semiFinal++;
    }
    fprintf(arq, "-=-=-=-=Fim da semi-final=-=-=-=-\n\n");

    fprintf(arq, "-=-=-=-=Final=-=-=-=-");
    fprintf(arq, "\nPartidas jogadas: \n");

    while (final < 2) {
        i = rand() % 15;
        strcpy(partida.time1, times[i]);
        strcpy(partida.time2, times[i + 1]);
        jogar(&partida);
        final++;
    }
    fprintf(arq, "Enfim, temos um vencedor!");

    // Fechando o arquivo
    fclose(arq);

    return 0;
}
