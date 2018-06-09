#include "header.h"

void controller(Node **head, FILE *output, char *file){
    int option;
    float (*functionPointer[10])(Node **) = {totalRevenue, totalWholesale, totalInvestments, totalProfit, totalBooksSold, averageProfit, booksInStock, booksOutOfStock, addBook, deleteBook};
    
    do{
        option = userOption();
        if(option<11)
            if(option == 1)
                printf("\nTotal Revenue: $%'.2f\n", functionPointer[option-1](head));
            else if(option == 2)
                printf("\nTotal wholesale cost: $%'.2f\n", functionPointer[option-1](head));
            else if(option == 3)
                printf("\nTotal wholesale Investment: $%'.2f\n", functionPointer[option-1](head));
            else if(option == 4)
                printf("\nTotal Profit: $%'.2f\n", functionPointer[option-1](head));
            else if(option == 5)
                printf("\nTotal number of books sold: %d\n", (int)functionPointer[option-1](head));
            else   
                functionPointer[option-1](head);
        else if(option == 11){
            quit(head, output, file);
            break;
        }else
            printf("ERROR: Invalid option.\n");
    }while(1);
    
}
