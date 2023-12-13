#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

struct informacoes
{
    char nome[900];
    char dataNascimento[900];
    float notas[2];
    float media;
};

struct  calcular_Media informacoes(){

    int i, j;
    float soma;
    struct informacoes aluno[5];

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 2; i++)
        {
            printf("Digite sua %dª nota: ");
            scanf("%f", &aluno[i].notas[j]);
            soma += aluno[i].notas[j];
        }
        
    
    }
    

printf("Digite a %dª nota", i + 1);
scanf("%f", &aluno.notas[0]);

printf("Digite a %dª nota", i + 1);
scanf("%f", &aluno.notas[1]);




}
