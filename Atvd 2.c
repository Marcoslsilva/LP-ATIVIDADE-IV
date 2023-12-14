#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define TAM 2

struct informacoes
{
    char nome[900];
    char dataNascimento[900];
    float notas[2];
    float media;
};

void calcular_Media(struct informacoes *aluno)
{

    int i, j;
    float soma = 0;

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < TAM; j++)
        {

            soma += aluno[i].notas[j];
        }

        aluno[i].media = soma / TAM;
        soma = 0;
    }
}

void validacao(struct informacoes *aluno)
{

    int i;

    for (i = 0; i < 5; i++)
    {
        if (aluno[i].media >= 7)
        {
            printf("O %dº aluno foi aprovado! \n", i + 1);
        }
        else
        {
            printf("O %dº aluno foi reprovado! \n", i + 1);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int i, j;
    struct informacoes aluno[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        gets(aluno[i].nome);

        for (j = 0; j < TAM; j++)
        {
            printf("Digite sua %dª nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
        }
        fflush(stdin);
    }
    calcular_Media(aluno);

    validacao(aluno);
    return 0;
}