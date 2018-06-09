#include "header.h"

float totalRevenue(Node **head){
    Node *temp;
    float revenue = 0.0;
    temp = *head;
    while(temp!=NULL){
        revenue += (temp->book.retailPrice * temp->book.retailQuantity);
        temp = temp->next;
    }
    return revenue;
}