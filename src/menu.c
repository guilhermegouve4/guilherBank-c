#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/menu.h"
#include "../include/tools.h"

int show_menu(const float *current_balance) {
    int user_choice;

        printf("Seja bem-vindo ao GuilherBank!");
        line_break(4);
        printf("Seu saldo é de R$:%.2f", *current_balance);
        line_break(2);
        printf("1. Realizar saque");
        line_break(1);
        printf("2. Sair");
        line_break(3);
        scanf("%d", &user_choice);
        clear_buffer();
        system("cls");

    return user_choice;
}