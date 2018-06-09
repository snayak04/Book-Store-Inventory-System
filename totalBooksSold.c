#include "header.h"

float totalBooksSold(Node **head){
    Node *temp;
    float sum=0.0;
    temp = *head;
    while(temp!=NULL){
        sum += temp->book.retailQuantity;
        temp = temp->next;
    }
    return sum;
}