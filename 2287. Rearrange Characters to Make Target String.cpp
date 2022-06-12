#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> mp1,mp2;
        for(auto &el: s)
           mp1[el]++;
       for(auto &el : target)
       	   mp2[el]++;
       int min= INT_MAX;
       for(auto &el : target)
       {
       	 if(min>mp1[el]/mp2[el])
       	 	min=mp1[el]/mp2[el];
       	 
       }
       return min;
       
    }
};
int main()
{
	string s,target ;
	s= "ilovecodingonleetcode";
	target = "code";
	Solution S;
	cout<<S.rearrangeCharacters(s,target)<<endl;


}