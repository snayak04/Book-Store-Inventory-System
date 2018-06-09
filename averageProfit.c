#include "header.h"

float averageProfit(Node **head){
    float average =  totalProfit(head)/(int)totalBooksSold(head);
    printf("\nAverage Profit: $%'.2f\n", average);
    return average;
}
