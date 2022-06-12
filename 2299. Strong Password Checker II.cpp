#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
    	int flag_upper = 0;
    	int flag_lower = 0; 
    	int flag_digit = 0;
    	int flag_special = 0 ;
    	if (password.size()<8)
    		return false;
        for(int i =0;i<password.size();i++)
        {

        	if(password[i]>='A'&&password[i]<='Z')
        		flag_upper=1;
        		
        	
        	if(password[i]>='a'&&password[i]<='z')
        		flag_lower=1;
        		
        	
        	if(password[i]>='0'&&password[i]<='9')
        		flag_digit=1;
        		
        	
        
        	if(password[i]=='!'||password[i]=='@'||password[i] =='#'||
        		password[i]=='$'||password[i]=='%'||password[i]=='^'||
        		password[i]=='&'|| password[i] == '*'||password[i] =='('||
        		password[i]==')'||password[i]=='-'||password[i]=='+')
        		flag_special=1;
        		
        	
        	

        }
        if(flag_upper==0||flag_lower==0||flag_digit==0||flag_special==0)	
        	return false;
        
        for (int i = 0; i < password.size()-1; ++i)
        {
        	if(password[i]==password[i+1])
        	

        		return false;
        	
        }
        return true; 
    }
};
int main()
{
   string str;
   str="1aB!";
   Solution S;
   cout<<S.strongPasswordCheckerII(str)<<endl;
}