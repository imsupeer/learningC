#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_EQUIPES 10
#define MAX_NOME_TIME 20

typedef struct {
    char nome[MAX_NOME_TIME];
    int pontos;
    int golsFeitos;
    int golsSofridos;
} Time;

void atualizarClassificacao(Time times[], int numTimes) {
    int i, j;
    Time temp;

    for (i = 0; i < numTimes; i++) {
        for (j = i + 1; j < numTimes; j++) {
            if (times[i].pontos < times[j].pontos ||
                (times[i].pontos == times[j].pontos &&
                 (times[i].golsFeitos - times[i].golsSofridos) <
                 (times[j].golsFeitos - times[j].golsSofridos))) {
                temp = times[i];
                times[i] = times[j];
                times[j] = temp;
            }
        }
    }
}

int gerarGolsAleatorios() {
    return rand() % 11;
}

int main() {
    srand(time(NULL));

    Time times[NUM_EQUIPES];
    char nomesTimes[NUM_EQUIPES][MAX_NOME_TIME] = {
        "Corinthians", "Flamengo", "Santos", "Palmeiras", "Sao Paulo",
        "Botafogo", "Fluminense", "Cruzeiro", "Bahia", "Vasco"
    };
    int i, j;
    char filename[] = "classificacao.txt";
    FILE *file;

    for (i = 0; i < NUM_EQUIPES; i++) {
        strcpy(times[i].nome, nomesTimes[i]);
        times[i].pontos = 0;
        times[i].golsFeitos = 0;
        times[i].golsSofridos = 0;
    }

    for (i = 0; i < NUM_EQUIPES; i++) {
        for (j = i + 1; j < NUM_EQUIPES; j++) {
            int golsTimeA = gerarGolsAleatorios();
            int golsTimeB = gerarGolsAleatorios();

            times[i].golsFeitos += golsTimeA;
            times[i].golsSofridos += golsTimeB;
            times[j].golsFeitos += golsTimeB;
            times[j].golsSofridos += golsTimeA;

            if (golsTimeA > golsTimeB) {
                times[i].pontos += 3;
            } else if (golsTimeA < golsTimeB) {
                times[j].pontos += 3;
            } else {
                times[i].pontos += 1;
                times[j].pontos += 1;
            }
        }
    }

    atualizarClassificacao(times, NUM_EQUIPES);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    fprintf(file, "Classificacao:\n");
    for (i = 0; i < NUM_EQUIPES; i++) {
        fprintf(file, "%d. Time: %s\n", i + 1, times[i].nome);
        fprintf(file, "   Pontos: %d\n", times[i].pontos);
        fprintf(file, "   Gols Feitos: %d\n", times[i].golsFeitos);
        fprintf(file, "   Gols Sofridos: %d\n\n", times[i].golsSofridos);
    }

    fclose(file);

    printf("Classificacao escrita no arquivo '%s'.\n", filename);

    return 0;
}
