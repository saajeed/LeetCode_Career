///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
class Solution
{

public: 
	vector <int> twoSum(vector<int>&nums,int target)
	{
		vector <int> ans;
      for(int i=0;i<nums.size()-1;i++)
      {
      	for(int j=i+1;j<nums.size();j++)
      	{
      		if(nums[i]+nums[j]==target)
      			{
      				ans.push_back(i);
      				ans.push_back(j);
      				break;
      			}
      	}
      	
      }
      return ans;

	}
};
int main()
{

  Solution s;
  vector<int> nums;
  int target;
  nums = {1,6,3,2,5};
  target = 11;
  vector <int> result = s.twoSum(nums,target);
  cout<<result[0]<<" "<<result[1]<<endl;
 



}