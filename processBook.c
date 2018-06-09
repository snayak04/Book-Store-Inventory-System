#include "header.h"

Node *processBook(FILE *input){
    Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("\nERROR: Allocating failed in function readBooks!\n");
        exit(1);
    }
    if(fscanf(input, "%[^\n]s", newNode->book.title) == EOF){
        free(newNode);
        return NULL;
    }
    fgetc(input);
    fscanf(input, "%[^\n]s\n", newNode->book.author);
    fgetc(input);
    fscanf(input, "%d", &newNode->book.stockNumber);
    fgetc(input);
    fscanf(input, "%f", &newNode->book.wholesalePrice);
    fgetc(input);
    fscanf(input, "%f", &newNode->book.retailPrice);
    fgetc(input);
    fscanf(input, "%d", &newNode->book.wholesaleQuantity);
    fgetc(input);
    fscanf(input, "%d", &newNode->book.retailQuantity);
    fgetc(input);
    newNode->next = NULL;
    
    return newNode;
}