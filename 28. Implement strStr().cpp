#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {
            string val = haystack.substr(i,needle.size());
            if(val==needle)
                return i;
        }
          return -1;

    }
  
};


int main()
{


    string haystack, needle ;
    haystack = "aaa";
    needle = "aaa";
    Solution S;
    cout<<S.strStr(haystack,needle)<<endl;
}