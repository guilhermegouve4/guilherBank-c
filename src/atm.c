#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

#include "../include/tools.h"
#include "../include/atm.h"
#include "../include/bills.h"

void do_withdraw(float *current_balance, float *special_limit) {
    float desirable_withdraw;
    int use_special_limit;

    do {
        printf("É um prazer tê-lo conosco!");
        line_break(2);
        printf("Seu saldo é de R$: %.2f", *current_balance);
        line_break(2);
        printf("Seu limite especial é de R$: %.2f", *special_limit);
        line_break(2);
        printf("Por favor digite a quantia desejada para saque: R$: ");

        if (scanf("%f", &desirable_withdraw) != 1) {
            printf("Quantia inválida!");
            line_break(1);
            printf("Por favor insira um número.");
            clear_buffer();
            desirable_withdraw = 0;
            pause_and_clear();
        } else {
            clear_buffer();
            if (desirable_withdraw <= 0) {
                printf("Quantia inválida!");
                line_break(1);
                printf("Por favor insira um número positivo.");
                line_break(2);
                desirable_withdraw = 0;
                pause_and_clear();
            } else if (desirable_withdraw > (*current_balance + *special_limit)) {
                desirable_withdraw = 0;
                system("cls");
                printf("Infelizmente seu saldo e limite são insuficientes para esta transação.");
                line_break(6);
                pause_and_clear();
            }
        }
    } while (desirable_withdraw <= 0 || desirable_withdraw > (*current_balance + *special_limit));

    if (desirable_withdraw <= *current_balance) {
        *current_balance -= desirable_withdraw;
        system("cls");
        printf("Saque de R$%.2f efetuado com sucesso!", desirable_withdraw);
        line_break(1);
        distribute_bills((int)desirable_withdraw);
        line_break(2);
        printf("Por favor, retire suas notas no compartimento abaixo.");
        line_break(2);
        pause_and_clear();
        printf("O GuilherBank agradece a preferência!");
        line_break(2);
        print_greeting_time();
        line_break(6);
        pause_and_clear();
    } else {
        do {
            system("cls");
            printf("O saldo em sua conta é insuficiente para realizar o saque.");
            line_break(2);
            printf("1. Utilizar limite especial");
            line_break(1);
            printf("2. Sair");
            line_break(6);
            printf("Limite especial disponível R$: %.2f", *special_limit);
            line_break(3);
            printf("Digite sua opção: ");

            if (scanf("%d", &use_special_limit) != 1) {
                clear_buffer();
                printf("Digite um número válido.");
                use_special_limit = 0;
                pause_and_clear();
            } else {
                clear_buffer();
                switch (use_special_limit) {
                    case 1:
                        *special_limit -= desirable_withdraw - *current_balance;
                        *current_balance = 0;
                        system("cls");
                        printf("Saque de R$%.2f efetuado com sucesso!", desirable_withdraw);
                        line_break(1);
                        distribute_bills((int)desirable_withdraw);
                        line_break(2);
                        printf("Por favor, retire suas notas no compartimento abaixo.");
                        line_break(2);
                        pause_and_clear();
                        printf("O GuilherBank agradece a preferência!");
                        line_break(2);
                        print_greeting_time();
                        line_break(6);
                        pause_and_clear();
                        break;
                    case 2:
                        system("cls");
                        printf("Operação cancelada!");
                        line_break(2);
                        printf("O GuilherBank agradece a preferência!");
                        line_break(2);
                        print_greeting_time();
                        line_break(6);
                        pause_and_clear();
                        break;
                    default:
                        printf("Digite uma opção válida!");
                        line_break(4);
                        pause_and_clear();
                        break;
                }
            }
        } while (use_special_limit != 1 && use_special_limit != 2);
    }
}