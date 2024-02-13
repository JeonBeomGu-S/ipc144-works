//
//  utils.c
//  DIY
//
//  Created by 전범구 on 2024-01-29.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getInt(void) {
    int value;
    scanf("%d", &value);
    return value;
}

double getDouble(void) {
    double value;
    scanf("%lf", &value);
    return value;
}
