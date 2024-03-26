//	
//	utils.c
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-14
//	


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void flushKey(void) {
    char ch;
    do {
      ch = getchar();
    } while (ch != '\n');
}

void newLine(void) {
    putchar( '\n' );
}

int getInt(void) {
    int num;
    char newLine = ' ';
    while(scanf("%d%c", &num, &newLine) != 2 || newLine != '\n') {
        flushKey();
        printf("Bad integer, try again\n> ");
    }
    return num;
}

double getDbl(void) {
    double num;
    char newLine = ' ';
    while(scanf("%lf%c", &num, &newLine) != 2 || newLine != '\n') {
        flushKey();
        printf("Bad double, try again\n> ");
    }
    return num;
}

float getFlt(void) {
    float num;
    char newLine = ' ';
    while(scanf("%f%c", &num, &newLine) != 2 || newLine != '\n') {
        flushKey();
        printf("Bad float, try again\n> ");
    }
    return num;
}
