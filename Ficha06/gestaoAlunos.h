#ifndef GESTAOALUNOS_H_INCLUDED
#define GESTAOALUNOS_H_INCLUDED

#include "funcoesGenericas.h"

#define MAXALUNOS 100
#define MAXNOTA 20
#define MAXSTRING 50
#define MIN_NUMALUNO 1
#define MAX_NUMALUNO 9999

typedef struct
{
    int num;
    char nome[MAXSTRING];
    tipoData dataAvaliacao;
    int notaFinal;
} tipoEstudante;

int lerQuantidadeEstudantes(void);
int lerDadosEstudante(char nome[]);
void acrescentaAluno (tipoEstudante vetorAlunos[], int *quantAlunos);
int procuraEstudante (int numAluno, tipoEstudante vetorAlunos[], int quantAlunos);
void mostrarUmAluno(tipoEstudante aluno);
void mostrarTodosAlunos(tipoEstudante vetorAlunos[], int quantAlunos);

#endif // GESTAOALUNOS_H_INCLUDED
