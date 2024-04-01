#include <stdio.h>
#include <string.h>
#include "POS.h"
#include "PosApp.h"
#include "utils.h"

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
            result = fscanf(fp, "%5[^,],%59[^,],%lf,%d,%d\n", items[noOfItems].SKU, items[noOfItems].name, &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity);
            if (result != 5)
                break;
            noOfItems++;
        }
    } else {
        printf("Could not open >>%s<<\n", filename);
    }

    
    fclose(fp);
    displayAction("Done!");
    return noOfItems;
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
    int index = -1;
    struct Item* bill[MAX_BILL_ITEMS];
    int numberOfBillItems = 0;
    double totalPrice = 0;
    
    // customer selection
    while (numberOfBillItems < 10) {
        index = search();
        if (0 < index && index < MAX_NO_ITEMS) {
            if (items[index].quantity > 0) {
                items[index].quantity -= 1;
                totalPrice += cost(&items[index]);
                *(bill + numberOfBillItems) = &items[index];
                numberOfBillItems++;
                
                display(&items[index]);
                
            } else {
                printf("Item sold out!\n");
            }
        } else if (index == -1){
            printf("SKU not found!\n");
        } else {
            break;
        }
    }
    
    
    // printing bill
    if (numberOfBillItems > 0) {
        printf("+---------------v-----------v-----+\n");
        printf("| Item          |     Price | Tax |\n");
        printf("+---------------+-----------+-----+\n");
        
        for (int i = 0; i < numberOfBillItems; i++) {
            billDisplay(bill[i]);
        }
        
        printf("+---------------^-----------^-----+\n");
        printf("| total:              %.2lf |\n", totalPrice);
        printf("^---------------------------^\n");
    }
    
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

void display(const struct Item* item) {
    printf("=============v\n");
    printf("Name:        %s\n", item->name);
    printf("Sku:         %s\n", item->SKU);
    printf("Price:       %.2lf\n", item->price);
    printf("Price + tax: ");
    if (item->taxed == 1)
        printf("%1.2lf\n", cost(item));
    else
        printf("N/A\n");
    printf("Stock Qty:   %d\n", item->quantity);
    printf("=============^\n");
}

int search(void) {
    char sku[MAX_SKU_LEN] = {0};
    int i = 0;
    int index = -1;
    printf("Sku: ");
    
    getLine(sku);
    
    if (sku[0] == '\0') {
        index = -2;
    }
    
    for (i = 0; i < noOfItems; i++) {
        if (strcmp(sku, items[i].SKU) == 0) {
            index = i;
            break;
        }
    }
    return index;
}
