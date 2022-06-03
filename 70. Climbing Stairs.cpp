#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int dv2 = n/2;
        return dv2+1;
    }
};
int main()
{

 int n ;
 n= 1 ; 
 Solution S;
 cout<<S.climbStairs(n)<<endl;
}