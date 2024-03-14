//	
//	report.c
//	DIY
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-02-13
//	


#include <stdio.h>
#include "utils.h"
#include "marks.h"

void report(int numberOfStudents) {
    int studentCount = 1;
    int maximumAcceptableMarkValue = 0;
    int studentMark = 0;
    char studentGrade = ' ';
    printf("What are the marks out of?\n> ");
    maximumAcceptableMarkValue = getInt();
    
    int minStudentMark = maximumAcceptableMarkValue;
    int maxStudentMark = 0;
    double sumOfStudentMark = 0.0;
    double averageStudentMark = 0.0;
    
    while (studentCount <= numberOfStudents) {
        printf("%d- ", studentCount);
        studentMark = getMark(maximumAcceptableMarkValue);
        if (studentMark == -1) {
            continue;
        }
        studentGrade = grade(studentMark);
        if (studentMark < minStudentMark) {
            minStudentMark = studentMark;
        }
        if (studentMark > maxStudentMark) {
            maxStudentMark = studentMark;
        }
        printf("Entered: %d%%, %c\n", studentMark, studentGrade);
        sumOfStudentMark += studentMark;
        studentCount++;
    }
    
    averageStudentMark = sumOfStudentMark / numberOfStudents;
    
    printf("Lowest mark entered: %d\n", minStudentMark);
    printf("Highest mark entered: %d\n", maxStudentMark);
    printf("Average of all marks: %.1lf%%\n", averageStudentMark);
}
