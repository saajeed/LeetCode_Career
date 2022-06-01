#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
        	if(nums[i]!=val)
        	{
        		ans.push_back(nums[i]);
        	}
        }
        nums.clear();
        nums=ans;
        /*for(auto &val : nums)
        {
        	cout<<val<<" ";
        }*/
        return nums.size();

    }
};
int main()
{
		vector<int> nums ;
		int val = 2;
		nums = {0,1,2,2,3,0,4,2};
		Solution S;
		cout<<S.removeElement(nums,val)<<endl;

}