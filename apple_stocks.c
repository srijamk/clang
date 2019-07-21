#include <stdio.h>

int main() {
    int n, minPrice, maxProfit, curPrice;
    minPrice = maxProfit = 0;
    scanf("%d", &n);
    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    minPrice = prices[0];
    for (int i = 0; i < n; i++) {
        curPrice = prices[i];
        minPrice = (minPrice < curPrice) ? minPrice : curPrice;
        maxProfit = (maxProfit > (curPrice - minPrice)) ? maxProfit : curPrice - minPrice;
    }    

    printf("%d\n", maxProfit);
}