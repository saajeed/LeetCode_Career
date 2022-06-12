#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    	vector<int> num2 ; 
    	vector<int>ans;
    	while(k!=0)
    	{
    		num2.push_back(k%10);
    		k=k/10;
    	}
    	reverse(num.begin(),num.end());
    	int i,j=i=0;
    	int carry = 0;
        while(i!=num.size() || j!=num2.size() || carry !=0 )
        {
        	int sum=0;

        	if(i<num.size())
        	{
              sum = sum+num[i];
              i++;
        	}
        	if(j<num2.size())
        	{
        		sum=sum+num2[j];
        		j++;
        	}

        	sum = sum + carry;
        	carry = sum/10;
        	ans.push_back(sum%10);
        }
        reverse(ans.begin(),ans.end());
    	return ans;
    }

};
int main()
{

  vector<int> num;
  num={2,1,5};
  int k=806;
  Solution S;
  vector<int>result = S.addToArrayForm(num,k);
  for(auto &el: result)
  	cout<<el<<" ";
  cout<<endl;

}