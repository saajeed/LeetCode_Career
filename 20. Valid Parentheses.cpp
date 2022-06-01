#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
       
       	for(int i=0;i<s.size();i++)
       	{
       		if (s[i]=='{'||s[i]=='('||s[i]=='[')
       			ans.push(s[i]);
       		else
       		{
       			if(ans.empty() || (s[i]==')' && ans.top()!='(') || (s[i]=='}' && ans.top()!='{')||(s[i]==']' && ans.top()!='['))
       				return false ;
       			ans.pop();

       		}


       	}
       	return ans.empty();
    }
};


int main()
{
   string str;
   str="(]";
   Solution Sl;
   cout<<Sl.isValid(str)<<endl;

}
