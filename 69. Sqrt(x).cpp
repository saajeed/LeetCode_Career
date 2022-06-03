#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
    	long long  i;
        for(i=1;i*i<=x;i++)
        {
        	continue;
        }
        return i-1;
    }
};
int main()
{

  int x;
  x=121;
  Solution S;
  cout<<S.mySqrt(x)<<endl;   

}