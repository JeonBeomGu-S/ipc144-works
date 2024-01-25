//
//  func.c
//  WS2.1
//
//  Created by 전범구 on 2024-01-23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void name(void) {
//    printf("Beomgu Jeon\n");
    printf("IPC144NBB 03-Jan23\n");
    printf("-----------\n");
}

void line40(void) {
    int cnt = 0;
    while (cnt < 40) {
        printf("-");
        cnt = cnt + 1;
    }
    putchar('\n');
}

void box2(void) {
    int cnt = 0;
    printf("****************************************\n");
    while (cnt < 8) {
        printf("*                                      *\n");
        cnt = cnt + 1;
    }
    printf("****************************************\n");
}
