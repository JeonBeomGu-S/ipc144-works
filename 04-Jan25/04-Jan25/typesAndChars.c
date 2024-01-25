//
//  typesAndChars.c
//  04-Jan25
//
//  Created by 전범구 on 2024-01-25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 integers:
    char      | 8 bits             | 1byte
    short     | 16 bits            | 2 bytes
    int       | 32 bits            | 4 bytes
    long      | 32 bits -> 64 bits | 4 or 8 bytes
    long long | 64 bits            | 8 bytes
 
 floating points:
    float       | 4 bytes
    double      | 8 bytes
    long double | 16 bytes
 */
/*
 stdio
 Format specifiers for IO
 char   %c
 int    %d
 floats %f
 double %lf
 */

//int main(void) {
//    int a = 20;
//    char ch = 'A';
//    float num = 1.234;
//    double lnum = 12.3456789;
//
//    printf("a: %d, ch: %c, num: %f, lnum: %lf\n", a, ch, num, lnum);
//    printf("a: %d, ch: %d, num: %f, lnum: %lf\n", a, ch, num, lnum);
//
//    ch = 'a';
//    while (ch <= 'z') {
//        printf("%c: %d\n", ch, ch);
//        ch = ch + 1;
//    }
//
//    ch = 'A';
//    while (ch <= 'Z') {
//        printf("%c: %d\n", ch, ch);
//        ch = ch + 1;
//    }
//
//    return 0;
//}
