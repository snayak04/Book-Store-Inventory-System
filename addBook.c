#include "header.h"


float addBook(Node **head){
    Node *newNode;
    newNode = malloc(sizeof(Node));
    if(newNode==NULL){
        printf("\nERROR: Allocation failed!\n");
        exit(1);
    }
    printf("Enter book title: ");
    getchar();
    scanf("%[^\n]s", newNode->book.title);
    printf("Enter book author: ");
    getchar();
    scanf("%[^\n]s", newNode->book.author);
    printf("Enter book stock number: ");
    scanf("%d", &newNode->book.stockNumber);
    printf("Enter book wholesale price: ");
    scanf("%f", &newNode->book.wholesalePrice);
    printf("Enter book retail price:  ");
    scanf("%f", &newNode->book.retailPrice);
    printf("Enter book wholesale quantity: ");
    scanf("%d", &newNode->book.wholesaleQuantity);
    printf("Enter book retail quantity: ");
    scanf("%d", &newNode->book.retailQuantity);
    insert(head, newNode);
    printf("%s by %s has been added. \n", newNode->book.title, newNode->book.author); 
    return (0);
}