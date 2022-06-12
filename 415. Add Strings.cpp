#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        int i,j=i=0;
        int carry =0;
        while(i!=num1.size() || j!=num2.size() || carry != 0)
        {
        	int sum = 0 ;
        	if(i<num1.size())
        	{
        		int val = num1[i]-'0';
        		sum = sum +val;
        		i++;
        	}
        	if(j<num2.size())
        	{
        		int val = num2[j]-'0';
        		sum=sum+val;
        		j++;
        	}
        	sum = sum + carry;
        	carry = sum/10;
        	char c = sum%10 + '0';
        	ans.push_back(c);
        }
        reverse (ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
  string num1,num2;
num1 = "456";
 num2 = "77";
  Solution S;
  cout<<S.addStrings(num1,num2)<<endl;
 


}