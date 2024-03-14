//	
//	utils.c
//	08-Mar12
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-12
//	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void flushKey( void ) {
    char ch;
    do {
      ch = getchar( );
    } while ( ch != '\n' );
}

void newLine( void ) {
    putchar( '\n' );
}

int getInt(void) {
    int num;
    while(scanf( "%d", &num ) != 1) {
        flushKey();
        printf("bad integer, try again\n> ");
    }
    flushKey();
    return num;
}

double getDbl(void) {
    double num;
    while(scanf( "%lf", &num ) != 1) {
        flushKey();
        printf("bad double, try again\n> ");
    }
    flushKey();
    return num;
}

float getFlt(void) {
    float num;
    while(scanf("%f", &num) != 1) {
        flushKey();
        printf("bad float, try again\n> ");
    }
    flushKey();
    return num;
}

void getLine(char str[]) {
    scanf( "%[^\n]", str );
    flushKey();
}
