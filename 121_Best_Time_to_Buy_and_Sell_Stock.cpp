#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int min_num = INT32_MAX, profit = 0, temp = 0;
    for(int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < min_num)
        {
            min_num = prices[i];
        }
        temp = prices[i] - min_num;
        if(profit < temp)
        {
            profit = temp;
        }
    }
    return profit;
}