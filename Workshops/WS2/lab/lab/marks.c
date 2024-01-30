//
//  marks.c
//  lab
//
//  Created by 전범구 on 2024-01-29.
//

#include <stdio.h>

int getInt(void);
double getDouble(void);

double calculateAverageMark(void) {
    double markTotal = 0;
    int counter = 0;
    double markValue = 0;
    double average = 0;
    int noOfMarks = 0;
    
    printf("Please enter the number of marks\n> ");
    noOfMarks = getInt();
    while (counter < noOfMarks) {
        printf("Enter mark #%d\n> ", counter + 1);
        markValue = getDouble();
        markTotal = markTotal + markValue;
        counter = counter + 1;
    }
    
    average = markTotal / noOfMarks;
    
    return average;
}
