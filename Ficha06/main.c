#include <stdio.h>
#include <stdlib.h>
#include "funcoesGenericas.h"
#include "gestaoAlunos.h"

int main()
{
    tipoEstudante vetorAlunos[MAXALUNOS];
    int quantAlunos = 0, quantProvisoria;

    quantProvisoria = lerQuantidadeEstudantes();


    for(int i=0; i < quantProvisoria; i++){
        acrescentaAluno(vetorAlunos, &quantAlunos);
    }

    mostrarTodosAlunos(vetorAlunos, quantAlunos);

    return 0;
}

//--------- IMPLEMENTAÇÃO das FUNÇÕES -----


