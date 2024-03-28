#include <stdio.h>
#include "POS.h"
#include "PosApp.h"
#include <stdlib.h>

int noOfItems = 0;
struct Item items[MAX_NO_ITEMS];

double cost(const struct Item* item) {
    double the_cost = item->price * (1 + item->taxed * TAX);
    return the_cost;
}

void listItems(void) {
    printf(" Row | SKU    | Item Name          | Price |TX | Qty |   Total |\n-----|--------|--------------------|-------|---|-----|---------|\n");
    
    for (int i = 0; i < noOfItems; i++) {
        printf("%4d | %6s | %-18s |%6.2lf | %c | %3d |%8.2lf |\n", (i + 1), items[i].SKU, items[i].name, items[i].price, items[i].taxed == 1 ? 'T' : ' ', items[i].quantity, cost(&items[i]) * items[i].quantity);
    }
}

void displayAction(const char* action) {
    printf(">>>> %s...\n", action);
}

int loadItems(const char filename[]) {
    displayAction("Loading Items");
    
    FILE* fp = fopen("posdata.csv", "r");
    if (fp == 0) {
        perror("fopen");
        exit(1);
    }
    
    int result = 0;
    
    while (1) {
        result = fscanf(fp, "%19[^,],%59[^,],%lf,%d,%d\n", items[noOfItems].SKU, items[noOfItems].name, &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity);
        if (result != 5)
            break;
        noOfItems++;
    }
    

    
    fclose(fp);
    displayAction("Done!");
    return 1;
}
void saveItems(const char filename[]) {
    displayAction("Saving Items");
}

void inventory(void) {
    double tav = 0;
    displayAction("List Items");
    listItems();
    for (int i = 0; i < noOfItems; i++) {
        tav += cost(&items[i]) * items[i].quantity ;
    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
    printf("                               Total Asset: $  | %13.2lf |\n-----------------------------------------------^---------------^\n", tav);
}

void addItem(void) {
    displayAction("Adding Item");
}
void removeItem(void) {
    displayAction("Remove Item");
}
void stockItem(void) {
    displayAction("Stock Items");
}
void POS(void) {
    displayAction("Point Of Sale");
}
