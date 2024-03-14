//	
//	item.h
//	08-Mar12
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-14
//	


#ifndef SENECA_ITEM_H
#define SENECA_ITEM_H

#define MAX_NO_OF_PRODUCTS 100
#define MAX_NAME_LENGTH 30

struct Item {
    double price;
    int sku;
    int qty;
    char name[MAX_NAME_LENGTH + 1];
};

void prnItem( struct Item A );
struct Item readItem( void );
void prnItems(const int sku[],const double price[],const int qty[], int num);
void readItems( int sku[], double price[], int qty[], int num );

#endif // SENECA_ITEM_H
