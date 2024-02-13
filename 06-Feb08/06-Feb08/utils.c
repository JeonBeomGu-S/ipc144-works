//	
//	utils.c
//	06-Feb08
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-02-08
//	


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey(void) {
    char ch;
    do {
        ch = getchar();
    } while (ch != '\n');
}

int getInt(void) {
    int num;
    scanf("%d", &num);
    flushKey();
    return num;
}

int getDouble(void) {
    double num;
    scanf("%lf", &num);
    flushKey();
    return num;
}
