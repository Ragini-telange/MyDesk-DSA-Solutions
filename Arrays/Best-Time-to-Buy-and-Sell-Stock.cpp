#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        int bestbuy=prices[0];
        int maxprice=0;
        for(int i=0;i<n;i++){
            bestbuy=min(bestbuy,prices[i]);
            maxprice=max(maxprice,prices[i]-bestbuy);

        }
        return maxprice;
        // Write your solution here
    }
};