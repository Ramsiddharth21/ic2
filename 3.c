#include <stdio.h>


void bestTimeToSellCommodity(int prices[], int n, int *buyDay, int *sellDay) {
    int minPrice = prices[0];
    int maxProfit = 0;
    *buyDay = 0;
    *sellDay = 0;


    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
            *buyDay = i;  // Update buy day
        }


        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
            *sellDay = i;  // Update sell day
        }
    }
}


int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int buyDay, sellDay;


    bestTimeToSellCommodity(prices, n, &buyDay, &sellDay);


    printf("Best day to buy: %d\n", buyDay + 1);  // 1-based index
    printf("Best day to sell: %d\n", sellDay + 1);  // 1-based index


    return 0;
}