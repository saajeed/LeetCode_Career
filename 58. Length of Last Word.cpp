#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int point;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]==' ')
          {
              continue;
          }
          else
          {
            point = i;
          	break;
          }
        }
        int len=0;
        for(int i=point;i<s.size();i++)
        {
        	if(s[i]==' ')
        	{
        		break;
        	}
        	else
        		len++;
        }

        return len;
        
    }
};
int main()
{
   string str;
   str = "Hello World           ";
   Solution S;
   cout<<S.lengthOfLastWord(str)<<endl;;
}
