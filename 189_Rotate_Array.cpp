#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    k = k % nums.size();
    reverse(nums.begin(), nums.end());   // 7 , 6 , 5 , 4, 3, 2 , 1
    reverse(nums.begin(), nums.begin() + k); // 5 , 6, 7, 4 , 3 , 2, 1
    reverse(nums.begin() + (k + 1), nums.end()); // 5, 6, 7, 1, 2, 3
}