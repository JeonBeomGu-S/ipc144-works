//	
//	main.c
//	MS5
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-26
//	


#include <stdio.h>
#include "POS.h"
#include "PosUI.h"

void fileDump(const char* filename);

int main(void) {
    runPos("posdata.csv");
    fileDump("posdata.csv");
    return 0;
}

void fileDump(const char* filename) {
    FILE* fptr = fopen(filename, "r");
    if(fptr) {
        char ch = 0;
        printf("Contents of file >>%s<<:\n", filename);
        while(fscanf(fptr, "%c", &ch) == 1) {
            putchar(ch);
        }
        fclose(fptr);
        printf("End of data in >>%s<<\n", filename);
    } else {
        printf("file: >>%s<< not found!\n", filename);
    }
}
