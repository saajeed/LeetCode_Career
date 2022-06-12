#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++)
        {

        	mp[nums[i]]++;
        
        }
        int ans;
        for(auto &el:mp)
        {
          if(el.second ==1)
          {
          ans = el.first;
          break;
          }
        }
        return ans;
    }
};
int main()
{
   vector <int> nums={4,1,2,1,2};
   Solution S;
   cout<<S.singleNumber(nums)<<endl;
}