#include <stdio.h>

int main() {
    int highest, lowest, highestProductOfTwo, lowestProductOfTwo, current, highestProduct = 0;
    int n;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    highest = (nums[0] > nums[1]) ? nums[0] : nums[1];
    lowest = (nums[0] < nums[1]) ? nums[0] : nums[1];

    highestProductOfTwo = lowestProductOfTwo = highest * lowest;
    highestProduct = highestProductOfTwo * nums[2];

    for (int i = 2; i < n; i++) {

        highestProduct = (highestProduct > highestProductOfTwo * nums[i]) ? highestProduct : highestProductOfTwo * nums[i];
        highestProduct = (highestProduct > lowestProductOfTwo * nums[i]) ? highestProduct : lowestProductOfTwo * nums[i];

        highestProductOfTwo = (highestProductOfTwo > highest * nums[i]) ? highestProductOfTwo : highest * nums[i];
        highestProductOfTwo = (highestProductOfTwo > lowest * nums[i]) ? highestProductOfTwo : lowest * nums[i];
        lowestProductOfTwo = (lowestProductOfTwo < lowest * nums[i]) ? lowestProductOfTwo : lowest * nums[i];
        lowestProductOfTwo = (lowestProductOfTwo < highest * nums[i]) ? lowestProductOfTwo : highest * nums[i];

        highest = (highest > nums[i]) ? highest : nums[i];
        lowest = (lowest < nums[i]) ? lowest : nums[i];
    }    

    printf("%d\n", highestProduct);
}