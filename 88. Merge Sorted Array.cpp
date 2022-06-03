#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for(int i=0;i<m;i++)
        	ans.push_back(nums1[i]);
        for(int i=0;i<n;i++)
            ans.push_back(nums2[i]);
        sort(ans.begin(),ans.end());
        nums1.clear();

        nums1=ans;
        for(auto &val : nums1)
        	cout<<val<<" ";
        cout<<endl;
        
    }
};
int main()
{
   vector<int> nums1,nums2;
   int m=1,n=0;
   Solution S;
   nums1 = {1};
   nums2 = {};

   S.merge(nums1,m,nums2,n);

}