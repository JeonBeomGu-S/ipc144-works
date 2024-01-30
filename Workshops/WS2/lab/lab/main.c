//
//  main.c
//  lab
//
//  Created by 전범구 on 2024-01-29.
//

#include <stdio.h>

double calculateAverageMark(void);

int main(int argc, const char * argv[]) {
    double averageMark;
    printf("---===<<<  Student Marks Average Calculator >>>===---\n\n");
    averageMark = calculateAverageMark();
    printf("Your average mark is: %.1lf\n", averageMark);
    return 0;
}
