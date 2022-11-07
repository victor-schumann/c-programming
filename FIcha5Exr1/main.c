#include <stdio.h>
#include <stdlib.h>
#define MAXINSCRITOS 25
#define MAXNOTA 20

// --- function declaration ---
void lerNotas (int vetorNotasFinais[], int quantAlunos);
int lerInteiro (int limMin, int limMax);
int lerQuantidadeAvaliados();
void mostrarDados(int alunos, int vetor[]);
float calculaMedia(int vetor[], int alunos);

//-- main program ---
int main()
{
    int vetorNotasFinais[MAXINSCRITOS];
    int quantAlunos;
    float media;
    printf("\n\n--- Inicio do programa ---\n");

    quantAlunos = lerQuantidadeAvaliados();
    lerNotas(vetorNotasFinais, quantAlunos);
    mostrarDados(quantAlunos, vetorNotasFinais);
    media = calculaMedia(vetorNotasFinais, quantAlunos);
    if (media != -1)
    {
        printf("\n\nMedia dos %d alunos avaliados: %.2f", quantAlunos, media);
    }
    printf("\n\n--- Fim do programa ---");
    return 0;
}

// --- function implementation ---
alterarNotas(int vetor[], int quantAlunos) {
    int nAluno;
    printf("\nIndique o nr. do aluno: ");
    nAluno = lerInteiro(0, quantAlunos);

    printf("\nNova nota do aluno: ");
    vetorNotasFinais[nAluno-1] = lerInteiro(0, MAXNOTA);
}

float calculaMedia(int vetor[], int alunos)
{
    int sum = 0;
    float media = -1;
    if (alunos > 0)
    {
        for (int i=0; i<alunos; i++)
        {
            sum += vetor[i];
        }
        media = (float) sum/alunos;
    }
    return media;
}

void mostrarDados(int alunos, int vetor[])
{
    if (alunos > 0)
    {
        for (int i=0; i<alunos; i++)
        {
            printf("\n\tNota 0%d: %d", i+1, vetor[i]);
        }
    }
    else
    {
        printf("Não existem alunos a serem avaliados");
    }

}

int lerQuantidadeAvaliados()
{
    int quant;
    printf("\nIserir a quantidade de avaliados: ");
    scanf("%d", &quant);
    return quant;
}

int lerInteiro(int limMin, int limMax)
{
    int num;
    do
    {
        printf("\n\tvalor: ");
        scanf("%d", &num);
        if (num < limMin || num > limMax)
        {
            printf("\nErro! Escolha um num. dentro do intervalo [0, %d]", MAXNOTA);
        }
    }
    while (num<limMin || num>limMax);
    return num;
}

void lerNotas(int vetorNotasFinais[], int quantAlunos)
{
    int i;
    for (i=0; i < quantAlunos; i++)
    {
        printf("\n\tNota 0%d: ", i+1);
        vetorNotasFinais[i] = lerInteiro(0, MAXNOTA);
    }
}
