#include "header.h"

int readBooks(Node **head, FILE *input){
    struct Node *newNode;
    int length = 0;
    while(!feof(input)){
        newNode = processBook(input);
        insert(head, newNode);
        length++;
    }
    return length;
}