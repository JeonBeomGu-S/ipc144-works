#ifndef SENECA_POSAPP_H
#define SENECA_POSAPP_H

#include "POS.h"

struct Item {
    char SKU[MAX_SKU_LEN];
    char name[60];
    double price;
    int taxed;
    int quantity;
};

extern struct Item items[MAX_NO_ITEMS];
extern int noOfItems;

double cost(const struct Item* item);
void listItems(void);


void start(const char* action);
void inventory(void);
void addItem(void);
void removeItem(void);
void stockItem(void);
void POS(void);

int loadItems(const char filename[]);
void saveItems(const char filename[]);

double billDisplay(const struct Item* item);
void display(const struct Item* item);
int search(void);

#endif // !SENECA_POSAPP_H

