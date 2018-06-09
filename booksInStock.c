#include "header.h"

float booksInStock(Node **head){
    Node *temp;
    int quantity;
    temp = *head;
    printf("IN STOCK BOOK LIST: \n\n");
    printf("%-13s %-20s %-40s %-20s\n","Stock#","Quantity","Author","Title");
    while(temp!=NULL){
        quantity = temp->book.wholesaleQuantity - temp->book.retailQuantity;
        if(temp->book.wholesaleQuantity - temp->book.retailQuantity>0){
            printf("%-15d  %-15d %-40s %-20s\n", temp->book.stockNumber, quantity, temp->book.author, temp->book.title);
        }
        temp = temp->next;
    }
    return (0);
}