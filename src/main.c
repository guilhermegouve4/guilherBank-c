#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

#include "../include/tools.h"
#include "../include/bills.h"
#include "../include/menu.h"
#include "../include/tools.h"

void line_break(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float current_balance = 1500;
    float special_limit = 2300;
    int user_choice;

    do {
        printf("Seja bem-vindo ao GuilherBank!");
        line_break(4);
        printf("Seu saldo é de R$:%.2f", current_balance);
        line_break(2);
        printf("Digite 1 para prosseguir com o saque");
        line_break(1);
        printf("Digite 2 para sair");
        line_break(1);
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                printf("Você escolheu:");
                line_break(1);
                printf("Efetuar saque");
                line_break(4);
                break;
            case 2:
                printf("Muito obrigado por utilizar os nossos serviços");
                line_break(2);
                printf("GuilherBank te deseja um bom/boa dia/tarde/noite");
                line_break(6);
                system("pause");
                break;
            default:
                printf("ENTRADA INVÁLIDA!");
                line_break(2);
                printf("Por favor digite 1 ou 2");
                line_break(6);
                system("pause");
                system("cls");
                break;       
        }

    } while (user_choice != 2);
    
}