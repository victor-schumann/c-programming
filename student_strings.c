#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSUBSCRIBED 25
#define MAXGRADE 20
#define MAXSTRING 50

// --- FUNCTION DECLARATION ---
int readAmountOfEvaluated(void);
void readGrades(int vectorFinalGrades[], int studentAmount, char nameVector[][MAXSTRING]);
int readInteger (char msg[], int limMin, int limMax);
void showData (int vectorFinalGrades[], int studentAmount);
float calcMedia(int vectorFinalGrades[], int studentAmount);
void readStudentNames (int studentAmount, char nameVector[][MAXSTRING]);
void cleanBuffer(void);
void readString (char msg[], char text[], int maxSize);

int main() {
    int vectorFinalGrades[MAXSUBSCRIBED];
    char nameVector[MAXSUBSCRIBED][MAXSTRING];
    int studentAmount;
    float media;

    studentAmount = readAmountOfEvaluated();
    readStudentNames(studentAmount, nameVector);
    readGrades(vectorFinalGrades, studentAmount, nameVector);
    showData(vectorFinalGrades, studentAmount);
    media = calcMedia(vectorFinalGrades, studentAmount);
    if (media > -1) {
        printf("\nAVERAGE: %.2f\n\n", media);
    }

    return 0;
}

// -- FUNCTION IMPLEMENTATION ---
void readString (char msg[], char text[], int maxSize) {
    int stringSize;
    do {
        printf("%s", msg);
        fgets(text, maxSize, stdin);
        if (text[0] == '\n' || text[0] == ' ') {
            printf("Error! Humans have names! And they don't start with blank spaces!");
        }
    } while (text[0] == '\n' || text[0] == ' ');

    stringSize = strlen(text);
    if (text[stringSize-1] != '\n') {
        cleanBuffer();
    } else {
        text[stringSize-1] = '\0';
    }
}

void cleanBuffer(void) {
    char letter;
    do {
        letter = getchar();

    } while (letter!='\n' && letter!=EOF);
}

void readStudentNames (int studentAmount, char nameVector[][MAXSTRING]) {
    int i;
    char msg[MAXSTRING];
    for (i=0; i<studentAmount; i++) {
        sprintf(msg, "\nStudent #%d name: ", i+1);
        readString(msg, nameVector[i], MAXSTRING);
    }
}

void changeGrade (int vectorFinalGrades[], int studentAmount) {
    int nAluno;

    if (studentAmount > 0) {
        nAluno = readInteger("\nIndique o nr. aluno ", 1, studentAmount);

        vectorFinalGrades[nAluno-1] = readInteger("\nNew student grade: ", 0, MAXGRADE);
    }
}

float calcMedia(int vectorFinalGrades[], int studentAmount) {
    int gradeSum=0, i;
    float media=-1;

    for (i=0; i < studentAmount; i++) {
        gradeSum += vectorFinalGrades[i];
    }

    if (studentAmount != 0) {
        media = (float) gradeSum / studentAmount;
    }

    return media;
}

void showData (int vectorFinalGrades[], int studentAmount) {
    int i;

    printf("\n----- STUDENT GRADES -------");
    if (studentAmount == 0) {
        printf("\nATENCAO: nao existem alunos avaliados para apresentar\n");
    } else {
        for (i=0; i < studentAmount; i++) {
            printf("\nGRADE(%d): %d", i+1, vectorFinalGrades[i]);
        }
    }
}

int readInteger (char msg[], int limMin, int limMax) {
    int num, controlo;

    do {
        printf("%s", msg);
        controlo = scanf("%d", &num);
        cleanBuffer();
        if (num < limMin || num > limMax || controlo == 0) {
            printf("\nERRO: o valor nao pertence ao intervalo [%d, %d]", limMin, limMax);
        }
    }
    while (num < limMin || num > limMax);
    return num;
}

void readGrades(int vectorFinalGrades[], int studentAmount, char nameVector[][MAXSTRING]) {
    int i;
    char msg[MAXSTRING];
    for (i=0; i < studentAmount; i++) {
        sprintf(msg, "\nGrade (%d - %s): ", i+1, nameVector[i]);
        vectorFinalGrades[i] = readInteger(msg, 0, MAXGRADE);
    }
}

int readAmountOfEvaluated(void) {
    int num;

    num = readInteger("\nHow many students were avaluated? ", 0, MAXSUBSCRIBED);

    return num;
}
