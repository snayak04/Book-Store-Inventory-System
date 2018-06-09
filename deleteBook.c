#include "header.h"

float deleteBook(Node **head){
    Node *current, *prevNode;
    int stockNum;
    printf("Please enter the book stock number of the book you wish to delete, followed by enter. \n");
    scanf("%d", &stockNum);
    current = *head;
    if(current == NULL){
        printf("\nERROR: Stocknumber: %d not found. Nothing to Delete!", stockNum);
        return(0);
    }else if(stockNum == current->book.stockNumber){
        *head = current->next;
        printf("StockNumber %d, %s by %s has been deleted.", current->book.stockNumber, current->book.title, current->book.author);
        free(current);
    }else{
        prevNode = current;
        current = current->next;
        while(current!=NULL && current->book.stockNumber != stockNum){
            prevNode = current;
            current = current->next;
        }
        if(current==NULL){
            printf("\nERROR: Stocknumber: %d not found. Nothing to Delete!", stockNum);
            return(0);
        }
        prevNode->next = current->next;
        printf("StockNumber %d, %s by %s has been deleted.", current->book.stockNumber, current->book.title, current->book.author);
        free(current);
    }
    return (0);
}