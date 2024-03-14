//	
//	utils.c
//	DIY
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-02-13
//	


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKey(void) {
   char ch = 0;
   do {
      ch = getchar();
   } while (ch != '\n');
}

int getInt(void) {
   int num = 0;
   scanf("%d", &num);
   flushKey();
   return num;
}

int getIntLimited(int min, int max) {
   int val = min -1;
   do {
      val = getInt();
      if (val < min || val > max) {
         printf("Number is out of range (%d <= number <= %d), retry:\n> ", min, max);
      }
   } while (val< min || val > max);
   return val;
}

double getDbl(void) {
   double num = 0.0;
   scanf("%lf", &num);
   flushKey();
   return num;
}
