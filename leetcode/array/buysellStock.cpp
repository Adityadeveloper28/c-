#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < prices.size(); i++) { // O(n) time complexity and O(1) space complexity
        minPrice = min(minPrice, prices[i]);    // Find the minimum price so far to buy the stock at that price
        maxProfit = max(maxProfit, prices[i] - minPrice); // Find the maximum profit so far by selling the stock at that price
    }
    
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}