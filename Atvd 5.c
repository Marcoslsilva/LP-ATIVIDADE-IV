#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

struct funcionario
{
    char nome[900];
    char cargo[900];
    float salario;
};

char funcionarios[5][900];

void mediaSalarial(struct funcionario *informacao, char funcionarios[][900])
{
    int i;
    float media, soma = 0;

    for (i = 0; i < 5; i++)
    {

        if (strcmp(funcionarios[i], informacao[i].nome) == 0)
        {

            soma += informacao[i].salario;
        }
    }

    if (soma == 0)
    {
        printf("N�o h� programadores nessa empresa");
    }

    media = soma / i;
    if (soma > 0)
    {
        printf("A m�dia salarial de programadores nessa empresa �: R$%.2f", media);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int i;
    struct funcionario informacao[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d� funcion�rio: \n", i + 1);
        gets(informacao[i].nome);

        printf("Digite o nome do cargo desse funcionario: \n");
        gets(informacao[i].cargo);

        printf("Digite o sal�rio desse funcion�rio: \n");
        scanf("%f", &informacao[i].salario);

        fflush(stdin);

        if (strcmp(informacao[i].cargo, "programador") == 0)
        {
            strcpy(funcionarios[i], informacao[i].nome);
        }
    }

    mediaSalarial(informacao, funcionarios);

    return 0;
}
