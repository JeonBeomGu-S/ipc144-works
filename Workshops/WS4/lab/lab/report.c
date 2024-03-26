//	
//	report.c
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-14
//	


#include "report.h"
#include "utils.h"
#include <stdio.h>

void readStudentInfo(int stdno[], float mark[], int num) {
    printf("Enter %d student records:\n", num);
    int i = 0;
    for (i = 0; i < num; i++) {
        printf("Enter Student Information # %d:\n", i + 1);
        printf("Student Number\n> ");
        stdno[i] = getInt();
        printf("Mark\n> ");
        mark[i] = getFlt();
        printf("----------------------\n");
    }
}

void printReport(const int stdno[], const float mark[], const int num) {
    int i = 0;
    float sum = 0.0f;
    printf("student number   mark\n");
    printf("---------------+------\n");
    for (i = 0; i < num; i++) {
        sum += mark[i];
        printf("%-15d|%6.1lf\n", stdno[i], mark[i]);
    }
    printf("---------------+------\n");
    printf("       Average:   %.1lf\n", sum / num);
}
