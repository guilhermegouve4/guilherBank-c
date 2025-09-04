#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

#include "../include/tools.h"
#include "../include/bills.h"
#include "../include/menu.h"

void line_break(int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    float current_balance = 1500;
    const float special_limit = 2300;
    int menu_choice;

    do {
        menu_choice = show_menu(&current_balance);

        switch(menu_choice) {
            case 1:
                printf("Você escolheu:");
                line_break(2);
                printf("SAQUE");
                pause_and_clear();
                do_withdraw(&current_balance, &current_balance);
                break;
            case 2:
                printf("O GuilherBank agradece a preferência!");
                line_break(2);
                print_greeting_time();
                line_break(6);
                pause_and_clear();
                break;
            default:
                printf("ENTRADA INCORRETA!");
                line_break(2);
                printf("Por favor selecione uma opção válida");
                pause_and_clear();
                break;
        }
    } while(menu_choice != 2);

    return 0;
    
}