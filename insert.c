#include "header.h"

void insert(Node **head, Node *nodeToInsert){
    Node *current;
    if(*head == NULL || nodeToInsert->book.stockNumber <= (*head)->book.stockNumber){ /* Empty list, add to the list anyways */
        nodeToInsert->next = *head;
        *head = nodeToInsert;
    }else{ /*Traversal Step */
       current = *head;
       while(current->next != NULL && current->next->book.stockNumber < nodeToInsert->book.stockNumber){
           current = current->next;
       }
       nodeToInsert->next = current->next;
       current->next = nodeToInsert;
    }
}