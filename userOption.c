#include "header.h"

int userOption(){
    int option;
    printf("\nPlease enter an integer between 1 and 11 to select an operation on the data:\n1)  Print Total Revenue\n2)  Print Total WholeSale Cost\n3)  Print Current Book Investment\n4)  Print Current Profit\n5)  Print Total Number of Book Sold\n6)  Print Average Profit per Book\n7)  Print Books In Stock\n8)  Print Out of Stock Books\n9)  Add Book to Inventory\n10) Delete Book from Inventory\n11) Exit Program\n \nOption: ");
    scanf("%d", &option);
    printf("\n");
    return option;
}