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
    
    FILE* fp = fopen(filename, "r");
    
    int result = 0;
    if (fp != NULL) {
        while (1) {
            result = fscanf(fp, "%19[^,],%59[^,],%lf,%d,%d\n", items[noOfItems].SKU, items[noOfItems].name, &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity);
            if (result != 5)
                break;
            noOfItems++;
        }
    } else {
        printf("Could not open >>%s<<\n", filename);
    }

    
    fclose(fp);
    displayAction("Done!");
    return 1;
}
void saveItems(const char filename[]) {
    displayAction("Saving Items");
    
    FILE* fp = fopen(filename, "w");
    
    int result = 0;
    if (fp != NULL) {
        for (int i = 0; i < noOfItems; i++) {
            fprintf(fp, "%s,%s,%.2lf,%d,%d\n", items[i].SKU, items[i].name, items[i].price, items[i].taxed, items[i].quantity);
        }
    } else {
        printf("Could not open >>%s<<\n", filename);
    }
    fclose(fp);
    displayAction("Done!");
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

double billDisplay(const struct Item* item) {
    char temp[15];
    double itemCost = cost(item);
    for (int i = 0; i < 15; i++) {
        temp[i] = item->name[i];
    }
    temp[14] = '\0';
    printf("| %-14s|%10.2lf | %s |\n", temp, itemCost, item->taxed == 1 ? "Yes" : "   ");
    return itemCost;
}
