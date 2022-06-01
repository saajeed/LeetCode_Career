#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> mp;
       mp['I'] = 1;
       mp['V'] = 5;
       mp['X']= 10;
       mp['L'] = 50;
       mp['C'] = 100;
       mp['D'] = 500;
       mp['M'] =1000;
       int ans = 0;
       for(int i=0; i<s.size();i++)
       {
          
       	// cout<<s[i]<<" "<<mp[s[i]]<<endl;

       	  ans = ans + mp[s[i]];
       	  if(i>0 && mp[s[i-1]]<mp[s[i]])
       	  {
       	  	ans = ans - 2*mp[s[i-1]];
       	  }
       }
       return ans;

    }
};
int main()
{

   string str ;  
   str = "LVIII";
   Solution S;
  cout<< S.romanToInt(str)<<endl;

}