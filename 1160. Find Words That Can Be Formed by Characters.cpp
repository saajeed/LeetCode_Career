#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
    	int sum = 0;
    	map<char,int> mp1;
    	
    	for(auto &el: chars)
    		mp1[el]++;
    	for(int i =0;i<words.size();i++)
       {
       	 map<char,int> mp2;
       	 for(auto &el : words[i])
       	 	mp2[el]++;
       	 int flag = 0;
       	 for(auto &el: words[i])
       	 {
       	 	if(mp1[el]/mp2[el]>0)
       	 		continue;
       	 	else
       	 	{
       	 		flag=1;
       	 		break;
       	 	}
       	 
       	 }
       	 	if(flag==0)
       	 	sum=sum+words[i].size();
       	 mp2.clear();
     
        
       }
       return sum;

    }
};
int main()
{
  vector<string> words;
  string chars;
  words ={"cat","bt","hat","tree"};
  chars= "atach";
  Solution S;
  cout<<S.countCharacters(words,chars)<<endl;
}