#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    for(int i = 2; i < nums.size() ; i++)
    {
        if(nums[i] == nums[i-1] && nums[i] == nums[i-2])
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }

}