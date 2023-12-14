#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct contaBancaria {
    char nome[200], numero[200], tipo[200];
    float saldo, transferencia, depositado;
};

float deposito (float valorInicial, float valorDeposito) {
    return valorInicial + valorDeposito;
}

float saque (float valorInicial, float valorSaque) {
    return valorInicial - valorSaque;
}

int main ( ) {

    int opcao;
    float depositoAtualizado, saqueAtualizado;
    struct contaBancaria dados;


    do {
        printf("O que voc? deseja fazer hoje?\n");
        printf("1 - Registrar conta nova\n");
        printf("2 - Deposito \n");
        printf("3 - Saque\n");
        printf("4 - Sair do programa\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        system("cls||clear");

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(dados.nome);

            printf("N?mero da conta: ");
            gets(dados.numero);

            printf("Tipo de conta desejada: ");
            gets(dados.tipo);

            printf("Qual saldo ter? na conta: ");
            scanf("%f", &dados.saldo);

            break;
        
        case 2:
            printf("Quanto voc? deseja depositar: ");
            scanf("%f", &dados.depositado);

            depositoAtualizado = deposito(dados.saldo, dados.depositado);

            printf("Nome do titular: %s\n", dados.nome);
            printf("N?mero da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pr?-dep?sito: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", depositoAtualizado);

            break;

        case 3:
            printf("Quanto voc? deseja sacar: ");
            scanf("%f", &dados.transferencia);

            saqueAtualizado = saque(dados.saldo, dados.transferencia);

            printf("Nome do titular: %s\n", dados.nome);
            printf("N?mero da conta: %s\n", dados.numero);
            printf("Tipo da conta: %s\n", dados.tipo);
            printf("Saldo pr?-saque: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", saqueAtualizado);

            break;
        
        default:
            break;
        }
    } while (opcao != 0);

    return 0;
}