//	
//	main.c
//	08-Mar12
//	Name: Beomgu Jeon
//	Email: bgjeon@myseneca.ca
//	StudentID: 126428234
//	Date: 2024-03-12
//	

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "item.h"

int main(void) {
    struct Item I = { 11.11, 222, 300 };
    prnItem( I );
    I.price = 33.23;
    I.qty = 10;
    I.sku = 444;
    prnItem( I );
    I = readItem( );
    prnItem( I );
    return 0;
}
