//	
//	main.c
//	DIY
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-02-13
//	

#include <stdio.h>
#include "marks.h"   // repeating includes are done on purpose
#include "marks.h"
#include "marks.h"
#include "marks.h"
#include "report.h"
#include "report.h"
#include "report.h"
#include "report.h"

int main(void) {
    int noOfStds = getNoOfStudents();
    while (noOfStds == 0) {
      noOfStds = getNoOfStudents();
    }
    report(noOfStds);
    return 0;
}
