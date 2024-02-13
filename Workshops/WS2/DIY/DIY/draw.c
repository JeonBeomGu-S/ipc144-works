//
//  draw.c
//  DIY
//
//  Created by 전범구 on 2024-01-29.
//

#include <stdio.h>

void rectangle(char leftTop, char top, char topRight,
               char right, char rightButtom, char buttom,
               char buttomLeft, char left, char fill,
               int width, int height) {
    int widthCounter = 0;
    int heightCounter = 0;
    printf("%c", leftTop);
    while (widthCounter < width - 2) {
        printf("%c", top);
        widthCounter = widthCounter + 1;
    }
    printf("%c\n", topRight);
    
    
    while (heightCounter < height - 2) {
        widthCounter = 0;
        printf("%c", left);
        while (widthCounter < width - 2) {
            printf("%c", fill);
            widthCounter = widthCounter + 1;
        }
        printf("%c\n", right);
        heightCounter = heightCounter + 1;
    }
    
    printf("%c", buttomLeft);
    widthCounter = 0;
    while (widthCounter < width - 2) {
        printf("%c", buttom);
        widthCounter = widthCounter + 1;
    }
    printf("%c\n", rightButtom);
    
}
