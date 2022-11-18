#include <stdio.h>
#include "gestaoAlunos.h"


void mostrarUmAluno(tipoEstudante aluno)
{
    printf("\n\tNr.: %d\n", aluno.num);
    printf("\tNome: %s\n", aluno.nome);
    if (aluno.notaFinal == -1)
    {
        printf("\tAluno nao avaliado\n");
    }
    else
    {
        printf("\tData: ");
        escreverData(aluno.dataAvaliacao);
        printf("\n\tNota Final: %d\n", aluno.notaFinal);
    }
}

void mostrarTodosAlunos(tipoEstudante vetorAlunos[], int quantAlunos)
{
    int i;

    printf("\n---- LISTAGEM dos ALUNOS -----\n");
    for (i=0; i < quantAlunos; i++)
    {
        printf("\n\nALUNO: %d", i+1);
        mostrarUmAluno(vetorAlunos[i]);
    }
}

int procuraEstudante (int numAluno, tipoEstudante vetorAlunos[], int quantAlunos)
{
    int i, pos=-1;

    for (i=0; i < quantAlunos; i++)
    {
        if (numAluno == vetorAlunos[i].num)
        {
            pos = i;
            i=quantAlunos;
        }
    }

    return pos;
}


void acrescentaAluno (tipoEstudante vetorAlunos[], int *quantAlunos)
{
    int pos, opcao=0;

    if (*quantAlunos == MAXALUNOS)
    {
        printf("\nATENCAO: impossivel inscrever mais mais. Lotacao esgota\n ");
    }
    else
    {
        do
        {
            vetorAlunos[*quantAlunos].num = lerDadosEstudante(vetorAlunos[*quantAlunos].nome);
            pos = procuraEstudante(vetorAlunos[*quantAlunos].num, vetorAlunos, *quantAlunos);
            if (pos != -1) // significa que o aluno já existe no vetor
            {
                printf("\nERRO: o aluno ja se encontra inscrito\n");
                opcao=lerInteiro("Quer inserir outro aluno (1-Sim, 0-Nao)", 0, 1);
            }
            else
            {
                vetorAlunos[*quantAlunos].notaFinal = -1; // indicador de que o aluno ainda não foi avaliado
                (*quantAlunos)++;
            }
        }
        while(opcao == 1);
    }
}

int lerDadosEstudante(char nome[])
{
    int numAluno;

    numAluno = lerInteiro("\nNr. Aluno", MIN_NUMALUNO, MAX_NUMALUNO);
    lerString("Nome do aluno: ", nome, MAXSTRING);

    return numAluno;
}

/* 2ª versão
void lerDadosEstudante(tipoEstudante *aluno)
{
    aluno->num = lerInteiro("Nr. Aluno", MIN_NUMALUNO, MAX_NUMALUNO);
    lerString("Nome do aluno: ", aluno->nome, MAXSTRING);
}
*/

/* 3ª versão
tipoEstudante lerDadosEstudante(tipoEstudante aluno)
{
    aluno.num = lerInteiro("Nr. Aluno", MIN_NUMALUNO, MAX_NUMALUNO);
    lerString("Nome do aluno: ", aluno.nome, MAXSTRING);

    return aluno;
}
*/

int lerQuantidadeEstudantes(void)
{
    int num;

    num = lerInteiro("\nIndique a quantidade de alunos inscritos", 0, MAXALUNOS);

    return num;
}
