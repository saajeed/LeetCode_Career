#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	int i;
     for(i=0;i<nums.size();i++)
     {

     	if(nums[i]>=target)
     		return i;
     } 
     return i;       
    }
};

int main()
{

	vector<int>nums = {1,3,5,6} ;
	int target=7;


	Solution S;
	cout<<S.searchInsert(nums,target); 
}