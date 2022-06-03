#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            
            if(sum > maxSum)
                maxSum = sum;
            
            if(sum <0)
                sum = 0;
        }
        
        return maxSum;
    }
};
int main()
{
  vector<int>nums;
  nums = {-2,1,-3,4,-1,2,1,-5,4};
  Solution S;
  cout<<S.maxSubArray(nums)<<endl;
}