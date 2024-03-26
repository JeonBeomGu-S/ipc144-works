//	
//	report.c
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-20
//	


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "report.h"

struct Student getStudent(void) {
    struct Student student;
    printf("Name\n> ");
    getLine(student.name);
    printf("Student Number\n> ");
    student.stNo = getInt();
    printf("Mark\n> ");
    student.mark = getFlt();
    printf("----------------------\n");
    
    return student;
}

void printStudent(struct Student S) {
    printf("%-30s| %-15d|%6.1lf\n", S.name, S.stNo, S.mark);
}

void printReport(const struct Student S[], int num) {
    printf("Name                           student number   mark\n");
    printf("------------------------------+----------------+------\n");
    float sum = 0;
    int i = 1;
    for (i = 1; i <= num; i++) {
        printStudent(S[i]);
        sum += S[i].mark;
    }
    printf("------------------------------+----------------+------\n");
    printf("                                       Average:   %.1lf\n", sum / num);
}

void readStudentInfo(struct Student S[], int num) {
    printf("Enter %d student records:\n", num);
    int i = 1;
    for (i = 1; i <= num; i++) {
        printf("Enter Student Information # %d:\n", i);
        S[i] = getStudent();
    }
}
