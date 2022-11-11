#include <stdio.h>
#include <stdlib.h>

#define MAXINSCRITOS 25
#define MAXNOTA 20

// DECLARACAO das FUN��ES
int lerQuantidadeAvaliados(void);
void lerNotas(int vetorNotasFinais[], int quantAlunos);
int lerInteiro (int limMin, int limMax);
void mostrarDados (int vetorNotasFinais[], int quantAlunos);
float calculaMedia(int vetorNotasFinais[], int quantAlunos);

int main() {
    int vetorNotasFinais[MAXINSCRITOS];
    int quantAlunos;
    float media;

    quantAlunos = lerQuantidadeAvaliados();
    lerNotas(vetorNotasFinais, quantAlunos);
    mostrarDados(vetorNotasFinais, quantAlunos);
    media = calculaMedia(vetorNotasFinais, quantAlunos);
    if (media != -1) {
        printf("\nMEDIA das NOTAS: %.2f\n\n", media);
    }

    return 0;
}

// -- IMPLEMENTACAO DAS FUNCOES ---

void alterarNota (int vetorNotasFinais[], int quantAlunos) {
    int nAluno;

    if (quantAlunos > 0) {
        printf("\nIndique o nr. aluno ");
        nAluno = lerInteiro(1, quantAlunos);

        printf("\nNova nota do aluno");
        vetorNotasFinais[nAluno-1] = lerInteiro(0, MAXNOTA);
    }
}

float calculaMedia(int vetorNotasFinais[], int quantAlunos) {
    int somaNotas=0, i;
    float media=-1;

    for (i=0; i < quantAlunos; i++) {
        somaNotas += vetorNotasFinais[i];
    }

    if (quantAlunos != 0) {
        media = (float) somaNotas / quantAlunos;
    }

    return media;
}

void mostrarDados (int vetorNotasFinais[], int quantAlunos) {
    int i;

    printf("\n\n----- LISTAGEM das NOTAS -------");
    if (quantAlunos == 0) {
        printf("\nATENCAO: nao existem alunos avaliados para apresentar\n");
    } else {
        for (i=0; i < quantAlunos; i++) {
            printf("\nNOTA(%d): %d", i+1, vetorNotasFinais[i]);
        }
    }
}

int lerInteiro (int limMin, int limMax) {
    int num;

    do {
        printf("\nvalor: ");
        scanf("%d", &num);
        if (num < limMin || num > limMax) {
            printf("\nERRO: o valor nao pertence ao intervalo [%d, %d]", limMin, limMax);
        }
    }
    while (num < limMin || num > limMax);
    return num;
}

void lerNotas(int vetorNotasFinais[], int quantAlunos) {
    int i;

    for (i=0; i < quantAlunos; i++) {
        printf("\nNota (%d): ", i+1);
        vetorNotasFinais[i] = lerInteiro(0, MAXNOTA);
    }
}

int lerQuantidadeAvaliados(void) {
    int num;

    printf("\nQuantos alunos foram avaliados: ");
    num = lerInteiro(0, MAXINSCRITOS);

    return num;
}
