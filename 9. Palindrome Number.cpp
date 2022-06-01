#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    	if(x<0)
    		return false ;
        string s;
        while(x/10!=0)
        {
        	char val = x%10 + '0';
        	x=x/10;
        	s.push_back(val);
        	
        }
        s.push_back(x+ '0') ;
        string rs= s;
        reverse(s.begin(),s.end());
        
        if(s==rs)
        return true;
        else
        	return false;
        
    }

};
int main()
{

	int x;
	x=19;
	Solution s ;
	bool ans = s.isPalindrome(x);
	cout<<ans<<endl;

}