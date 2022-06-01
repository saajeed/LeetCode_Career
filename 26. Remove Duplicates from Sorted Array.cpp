#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	map<int,int> mp;
         for(int i=0;i<nums.size();i++)
         {

         	mp[nums[i]]++;
         	
         }
         nums.clear();
         int j=0;
         for(auto &it : mp)
         {
             //cout<<it.first<<" "<<it.second<<endl;
         	if(it.second>0)
         	{
            nums.push_back(it.first);
           // cout<<nums[j]<<endl;
            j++;
            //cout<<nums.size()<<endl;

            } 

           
         }
        
         return nums.size();
    }
};
int main()
{
    vector<int>nums;
    nums={1,1,2};
    Solution s;
   cout<< s.removeDuplicates(nums)<<endl;

}