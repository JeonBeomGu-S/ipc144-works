//	
//	marks.c
//	DIY
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-02-13
//	


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"

void prnGrade(char letterGrade) {
    if (letterGrade == '+')
        printf("A+");
    else
        printf("%c", letterGrade);
}
char grade(int markOutOf100) {
    if (0 <= markOutOf100 && markOutOf100 < 50)
        return 'F';
    else if (50 <= markOutOf100 && markOutOf100 <= 59)
        return 'D';
    else if (60 <= markOutOf100 && markOutOf100 <= 69)
        return 'C';
    else if (70 <= markOutOf100 && markOutOf100 <= 79)
        return 'B';
    else if (80 <= markOutOf100 && markOutOf100 <= 89)
        return 'A';
    else if (90 <= markOutOf100 && markOutOf100 <= 100)
        return '+';
    else
        return 'X';
}
int getNoOfStudents(void) {
    int num;
    printf("Please enter the number of students\n> ");
    num = getInt();
    if (num < 5) {
        printf("Minimum number of students is 5!\n");
        num = 0;
    }
    else if (num > 35) {
        printf("Maximum number of students is 35!\n");
        num = 0;
    }
    return num;
}
int getMark(int maximumAcceptableMarkValue) {
    int mark;
    printf("Please print a mark between 0 and %d:\n> ", maximumAcceptableMarkValue);
    mark = getInt();
    if (mark < 0 || mark > maximumAcceptableMarkValue) {
        mark = -1;
        printf("Invalid Mark!\n");
    }
    else {
        mark = mark * 100 / maximumAcceptableMarkValue;
    }
    return mark;
}
