#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define TAM 2

struct contato
{
    char nome[900];
    char telefone[900];
    char email[900];
};

void retornandoTelefone(struct contato *usuario, char contato[])
{

    
    int i;

    for ( i = 0; i < TAM; i++)
    {
        if (strcmp(usuario[i].nome, contato)==0)
        {
            printf("Nome: %s \n", usuario[i].nome);
            printf("Telefone: %s \n", usuario[i].telefone);
            return;
        }

        printf("Contato n�o encontrado!");
        
    }

   
    

    
}


int main()
{
    setlocale(LC_ALL, "");
    struct contato usuario[3];
    char nome[900];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %d� nome: \n", i + 1);
        gets(usuario[i].nome);

        printf("Digite o %d� telefone: \n", i+ 1);
        gets(usuario[i].telefone);
        
        printf("Digite o %d� email: ", i + 1);
        gets(usuario[i].email);
    }

    printf("Digite o nome do n�mero do contato que deseja pesquisar:");
    gets(nome);

    retornandoTelefone(usuario, nome);

    return 0;
}
