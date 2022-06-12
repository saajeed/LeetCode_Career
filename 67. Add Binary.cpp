#include<bits/stdc++.h>
#include <cmath>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int i_a=0;
        int j_b=0;
        int carry = 0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string result;
        while(i_a!=a.size() || j_b!=b.size() || carry!=0)
        {
     
           int sum=0;
           if(i_a<a.size())
           {
           // cout<<"a " << a[i_a]<<endl;
            int val = a[i_a]-'0';
            sum = sum+val;
            i_a++; 
           } 
           if(j_b<b.size())
           {
           // cout<<"b "<<b[j_b]<<endl;
            int val = b[j_b]-'0';
            sum=sum+val;
            j_b++;
           }
           
           sum=sum+carry;
           if(sum==2)
            sum=10;
           else if(sum==3)
            sum=11;

           carry = sum/10;
           char c = sum%10+'0';
          // cout<<"Sum "<<sum<<endl;
           // cout<<"C "<<c<<endl;
          // cout<<"Carry "<<carry<<endl;
          
           result.push_back(c);


        }
        reverse(result.begin(),result.end());
        return result;
    }
          
       
    

};
int main()
{
    
	string a,b;
	a="1010";
	b="1011";
	//cout<<a.size()-b.size()<<endl;
  Solution S;
  cout<<S.addBinary(a,b)<<endl; 
 
}