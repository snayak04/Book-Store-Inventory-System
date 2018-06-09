#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

struct Data {
    char title[100];
    char author[50];
    int stockNumber;
    float wholesalePrice;
    float retailPrice;
    int wholesaleQuantity;
    int retailQuantity;
};

typedef struct Node{
    struct Data book;
    struct Node *next;
} Node;

void model(char **argv);
int readBooks(Node **head, FILE *input); /*Reads the input file line by line*/
Node *processBook(FILE *input); /*converts the data into Node*/
void insert(Node **head, Node *nodeToInsert); /*sorts and insert the node to the head*/
int userOption(); /*Shows the user menu*/
void controller(Node **head, FILE *output, char *file); /*Logic between userOption and function pointers */
float totalRevenue(Node **head); /*This is the sum of (retail price * retail quantity) for all books*/
float totalWholesale(Node **head); /*This is the sum of (wholesale price * wholesale quantity) for all books*/
float totalInvestments(Node **head); /*This is the sum of (wholesale price * (wholesale quantity – retail quantity))*/
float totalProfit(Node **head); /*This is total revenue (#1) minus total wholesale cost (#2) plus cost of current inventory (#3)*/
float totalBooksSold(Node **head); /*This is the sum of the retail quantities for all books */
float averageProfit(Node **head); /*This is total profit (#4) divided by total number of sales (#5)*/
float booksInStock(Node **head); /*This function should print each book on “Book list” where (Wholesale quantity – Retail quantity >0).  The output would be a “Title Line”  that says something like “Books in Stock” then on subsequent lines, the number of books currently in stock (Wholesale – Retail) followed by a tab character then the book stock number followed by a tab character, then the author of the book followed by the tab character then the title of the book*/
float booksOutOfStock(Node **head); /*This function should print each book on “Book list” where (Wholesale quantity – Retail quantity == 0).  The output would be a “Title Line” that says something like “Books out of Stock” then on subsequent lines the book stock number followed by a tab character, then the author of the book followed by the tab character then the title of the book*/
float addBook(Node **head); /*prompt the user to enter the book data for a single book, in the format given above from the keyboard*/
float deleteBook(Node **head); /*prompt the user to enter a book stock 
number to delete from inventory: if the book is not found in the linked list, print a message indicating an error, or if the list is empty, print an error indicating that)*/
void quit(Node **head, FILE *output, char* file); /* (This option would write the current inventory in the linked list out to disk using filename2 from the command line and would also free all dynamically allocated memory.)*/