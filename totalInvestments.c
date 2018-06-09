#include "header.h"

float totalInvestments(Node **head){
    Node *temp;
    float investment = 0.0;
    temp = *head;
    while(temp!=NULL){
        investment += (temp->book.wholesalePrice * (temp->book.wholesaleQuantity - temp->book.retailQuantity));
        temp = temp->next;
    }
    return investment;
}