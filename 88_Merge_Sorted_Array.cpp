#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n = 3, m = 3;
    vector<int> nums1= {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    
    for(int i = m; i < m+n-1; i++)
    {
        nums1[i] = nums2[i-m];
    }
    sort(nums1.begin(), nums1.end());

    
}