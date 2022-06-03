#include<bits/stdc++.h>
#include <cmath>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
          
       if(a.size()<b.size())
        { 
        	int val = b.size()-a.size();
          for(int i=0;i<val;i++){
          	a.push_back('0');
          }
          reverse(a.begin(),a.end());
        }
        else if(a.size()>b.size())
        {
             int val = a.size()-b.size();
          for(int i=0;i<val;i++)
          	b.push_back('0');
          reverse(b.begin(),b.end());
        }
       
        cout<<a<<" "<<b<<endl;
    
       int c=0;
       int flag=0;
       int val = a.size()-1;
       for(int i =val;i>=0;i--)
       {
           if((a[i]=='1'&&b[i]=='0' && c==0)||(a[i]=='0' && b[i]=='1' && c==0) )
           	{
           		a[i]='1';
           		cout<<"1st a "<<a[i]<<" b "<<b[i]<<" c "<<c<<endl;
           	}

           else if(a[i]=='1'&&b[i]=='1' && c==0)
           {
           	if(i==0)
           	 flag =1;
           	a[i]='0';
           	c=1;
           	cout<<"2nd a "<<a[i]<<" b "<<b[i]<<" c "<<c<<endl;
           }
           else if(a[i]=='1'&&b[i]=='1' && c==1)
           {
           	if(i==0)
           	 flag =1;
           	a[i]='1';
           	c='1';
           	cout<<"3rda "<<a[i]<<" b "<<b[i]<<" c "<<c<<endl;
           }
           else if((a[i]=='1'&&b[i]=='0' && c==1)||(a[i]=='0' && b[i]=='1' && c==1))
           {
           	cout<<"Done"<<endl;
           	if(i==0)
           	 flag =1;
           	else

           	a[i]='0';
           	c='0';
           	cout<<"4tha "<<a[i]<<" b "<<b[i]<<" c "<<c<<endl;
           }
       }

       if(flag)
       {
       	a.insert(a.begin(),'1');
       	return a;
       }
       return a;
    }

   
     
       

};
int main()
{
	string a,b;
	a="111";
	b="11";
	//cout<<a.size()-b.size()<<endl;
  Solution S;
  cout<<S.addBinary(a,b)<<endl; 
 
}