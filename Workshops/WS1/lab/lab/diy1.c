//
//  diy1.c
//  lab
//
//  Created by 전범구 on 2024-01-16.
//

#include <stdio.h>

void title(void); // introduces the title function
void line(void);
void info(void);
void average(void);

int main(void) {
    title(); // calls (runs) the title function
    line();
    info();
    line();
    average();
    line();
    return 0;
}

// implementing title function
// what title is suposed to do
void title(void) {
    printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

void line(void) {
    printf("------------------------------------------------------------\n");
}

void info(void) {
    printf("Name:\n\tBeomgu Jeon\nEmail:\n\tbgjeon@myseneca.ca\n");
}

void average(void) {
    int ipc_score = 0;
    int uli_score = 0;
    int eac_score = 0;
    
    printf("Enter the marks for the following subjects,\nIPC144: ");
    scanf("%d", &ipc_score);
    printf("ULI101: ");
    scanf("%d", &uli_score);
    printf("EAC150: ");
    scanf("%d", &eac_score);
    printf("The average is: %d\n", (ipc_score + uli_score + eac_score) / 3);
}
