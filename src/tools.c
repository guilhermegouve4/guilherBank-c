#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../include/tools.h"

void line_break(int num_of_lines) {
    int count = 0;
    while (count < num_of_lines) {
        printf("\n");
        count++;
    }
}

void clear_buffer() {
    int chr;
    while ((chr = getchar()) != '\n' && chr != EOF) {
    }
}

void pause_and_clear() {
    system("pause");
    system("cls");
}

void print_greeting_time() {
    time_t current_time = time(NULL);
    struct tm *local_time;

    local_time = localtime(&current_time);

    if (local_time->tm_hour >= 6 && local_time->tm_hour < 12) {
        printf("Tenha um excelente dia!");
        line_break(1);
    } else if (local_time->tm_hour >= 12 && local_time->tm_hour < 18) {
        printf("Tenha uma excelente tarde!");
        line_break(1);
    } else {
        printf("Tenha uma excelente noite!");
        line_break(1);
    }
}