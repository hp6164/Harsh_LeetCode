#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    vector<int> positions;
    int val = 2;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == val)
        {
            positions.push_back(i-positions.size());
        }
    }
    for(int i = 0; i < positions.size(); i++)
    {
        nums.erase(nums.begin() + positions[i]);
    }
    return nums.size();
}