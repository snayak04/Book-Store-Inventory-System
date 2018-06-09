#include "header.h"

float booksOutOfStock(Node **head){
    Node *temp;
    int quantity;
    temp = *head;
    printf("Out of Stock Book List:: \n\n");
    printf("%-13s %-40s %-20s\n","Stock","Author","Title");
    while(temp!=NULL){
        quantity = temp->book.wholesaleQuantity - temp->book.retailQuantity;
        if(quantity<=0){
            printf("%-15d %-40s %-20s\n", temp->book.stockNumber, temp->book.author, temp->book.title);
        }
        temp = temp->next;
    }
    return (0);
}