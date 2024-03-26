//	
//	main.c
//	lab
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-20
//	


#include <stdio.h>
#include "utils.h"
#include "report.h"

int main(void) {
   struct Student std[100];
   int num;
   printf("Enter number of the student records\n> ");
   num = getInt();
   readStudentInfo(std, num);
   printReport(std, num);
   return 0;
}
