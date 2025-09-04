#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

#include "..\include\tools.h"
#include "..\include\bills.h"

void distribute_bills(int amount) {
    int num_of_guara = 0;
    int num_of_peixe = 0;
    int num_of_onca = 0;
    int num_of_mico = 0;
    int num_of_arara = 0;
    int num_of_garca = 0;
    int num_of_tartaruga = 0;
    int num_of_beija_flor = 0;
    int total = amount;

    printf("Aguarde um momento...");
    line_break(6);
    pause_and_clear();

    printf("Impresso:");
    line_break(2);

    while (total >= 200) {
        total -= 200;
        num_of_guara++;
    }
    if (num_of_guara > 0) {
        printf("%d notas de R$:200,00", num_of_guara);
        line_break(1);
    }

    while (total >= 100) {
        total -= 100;
        num_of_peixe++;
    }
    if (num_of_peixe > 0) {
        printf("%d notas de R$:100,00", num_of_peixe);
        line_break(1);
    }

    while (total >= 50) {
        total -= 50;
        num_of_onca++;
    }
    if(num_of_onca > 0) {
        printf("%d notas de R$:50,00", num_of_onca);
        line_break(1);
    }

    while(total >= 20) {
        total -= 20;
        num_of_mico++;
    }
    if (num_of_mico > 0) {
        printf("%d notas de R$:20,00", num_of_mico);
        line_break(1);
    }

    while (total >= 10) {
        total -= 10;
        num_of_arara++;
    }
    if (num_of_arara > 0) {
        printf("%d notas de R$:10,00", num_of_arara);
        line_break(1);
    }

    while (total >= 5) {
        total -= 5;
        num_of_garca++;
    }
    if (num_of_garca > 0) {
        printf("%d notas de R$:5,00", num_of_garca);
        line_break(1);
    }

    while (total >= 2) {
        total -= 2;
        num_of_tartaruga++;
    }
    if (num_of_tartaruga > 0) {
        printf("%d notas de R$:2,00", num_of_tartaruga);
        line_break(1);
    }

    while (total >= 1) {
        total -= 1;
        num_of_beija_flor++;
    }
    if (num_of_beija_flor > 0) {
        printf("%d notas de R$:1,00", num_of_beija_flor);
        line_break(1);
    }
}