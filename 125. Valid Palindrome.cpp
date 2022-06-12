#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        string s2;
        for(int i=0;i<s.size();i++)
        {

        	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0'&&s[i]<='9'))
        		s1.push_back(tolower(s[i]));
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        cout<<s2<<endl<<s1<<endl; 
        return(s1==s2);
    }
};
int main()
{

 string s = "0P";
 Solution S;
 cout<<S.isPalindrome(s)<<endl;


}