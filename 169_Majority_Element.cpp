#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    sort(nums.begin(), nums.end());
    int n = nums.size()/2;
    return(nums[n]);
}

