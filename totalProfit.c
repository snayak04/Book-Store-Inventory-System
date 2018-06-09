#include "header.h"

float totalProfit(Node **head){
    Node *temp;
    float profit = 0.0;
    temp = *head;
    profit = totalRevenue(head) - totalWholesale(head) + totalInvestments(head);
    return profit;
}