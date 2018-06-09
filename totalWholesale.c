#include "header.h"

float totalWholesale(Node **head){
    Node *temp;
    float wholesale = 0.0;
    temp = *head;
    while(temp!=NULL){
        wholesale += (temp->book.wholesalePrice * temp->book.wholesaleQuantity);
        temp = temp->next;
    }
    return wholesale;
}