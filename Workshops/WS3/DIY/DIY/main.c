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
//   int noOfStds = getNoOfStudents();
//   while (noOfStds == 0) {
//      noOfStds = getNoOfStudents();
//   }
//   report(noOfStds);
    int i = 9, done = 0;
    while (i > 2) {
        if (i > 7) {
            i -= 2;
        }
        else if (!done) {
            done = i = 4;
        }
        i--;
        printf("%d", i);
    }
   return 0;
}
