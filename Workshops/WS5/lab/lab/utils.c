//	
//	utils.c
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-20
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

int getInt(void) {
    int num;
    char newLine = ' ';
    while(scanf("%d%c", &num, &newLine) != 2 || newLine != '\n') {
        flushKey();
        printf("Bad integer, try again\n> ");
    }
    return num;
}

float getFlt(void) {
    float num;
    char newLine = ' ';
    while(scanf("%f%c", &num, &newLine) != 2 || newLine != '\n') {
        flushKey();
        printf("Bad real number, try again\n> ");
    }
    return num;
}

void getLine(char cstr[]) {
    scanf("%[^\n]", cstr);
    flushKey();
}
