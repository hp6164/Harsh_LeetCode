#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    for(int i = 1; i < nums.size() ; i++)
    {
        if(nums[i] == nums[i-1])
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }

}
