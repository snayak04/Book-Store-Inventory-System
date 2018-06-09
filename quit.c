#include"header.h"

void quit(Node **head, FILE *output, char *file){
    Node *temp;
    int count = 0;
    while(*head!=NULL){
        count ++;
        fprintf(output, "%s\n", (*head)->book.title);
        fprintf(output, "%s\n", (*head)->book.author);
        fprintf(output, "%d\n", (*head)->book.stockNumber);
        fprintf(output, "%.2f\n", (*head)->book.wholesalePrice);
        fprintf(output, "%.2f\n", (*head)->book.retailPrice);
        fprintf(output, "%d\n", (*head)->book.wholesaleQuantity);
        fprintf(output, "%d\n", (*head)->book.retailQuantity);
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
    printf("A total of %d book titles were written to file %s.\n", count, file);
}