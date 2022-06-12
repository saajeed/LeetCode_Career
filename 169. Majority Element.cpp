#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n =nums.size();
        for(auto &el: nums)
            mp[el]++;
        map<int, int>::iterator it;
        int max = 0;
        int ans;
        for(it=mp.begin();it!=mp.end();it++)
        {
              if(it->second>=max)
              {
                 max=it->second;
                 ans=it->first;           
              }

        }
        return ans;

        
    }
};
int main()
{ 
  vector<int> nums;
  nums={2,2,1,1,1,2,2};
  Solution S;
  cout<<S.majorityElement(nums)<<endl;   

}