//
//  main.c
//  lab
//
//  Created by Beomgu Jeon on 2024-01-16.
//

#include <stdio.h>

void title(void); // introduces the title function
void line(void);
void info(void);

int main(void) {
    title(); // calls (runs) the title function
    line();
    info();
    line();
    return 0;
}

// implementing title function
// what title is suposed to do
void title(void) {
    printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void) {
    printf("------------------------------------------------------------\n");
}

void info(void) {
    printf("Name:\n\tBeomgu Jeon\nEmail:\n\tbgjeon@myseneca.ca\n");
}
