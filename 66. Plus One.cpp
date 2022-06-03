#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
        if(digits[digits.size()-1]!=9)
        {
        	digits[digits.size()-1]++;
        	return digits;
        }
        else
        { 
	        for(int i=digits.size()-1;i>=0;i--)
	        {
	           if(digits[i]==9)
	           		digits[i]=0;
	           	else
	           	{
	           		digits[i]++;
	           		flag=1;
	           		break;
	           	}
	  			      	
	        }

	    }
	    if(flag)
	    	return digits;
	    else
	    {
	    	
	    	digits.insert(digits.begin(),1);
	    	return digits;
	    }
    
    }
};
int main()
{

 vector<int> digits ;
 vector<int> ans;
 digits = {1,2,3,4};
 Solution S;
 ans= S.plusOne(digits);
 for(auto & i : ans )
 {
 	cout<<i<<" ";
 }

}