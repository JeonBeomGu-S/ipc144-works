#include "PosUI.h"
#include "PosApp.h"
#include "utils.h"
#include <stdio.h>

int menu(void) {
    int selection = 0;
    printf("The Sene-Store\n1- Inventory\n2- Add item\n3- Remove item\n4- Stock item\n5- POS\n0- exit program\n> ");
    selection = getIntMM(0, 5, "Selection");
    
    return selection;
}

void runPos(const char filename[]) {
    loadItems(filename);
    int menuSelection = 0;
    do {
        menuSelection = menu(); // menu will return only 0 to 5
        switch (menuSelection) {
            case 1:
                inventory();
                break;
            case 2:
                addItem();
                break;
            case 3:
                removeItem();
                break;
            case 4:
                stockItem();
                break;
            case 5:
                POS();
                break;
        }
    } while (menuSelection);
    saveItems(filename);
    printf("Goodbye!\n");
}
