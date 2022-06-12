#include<bits/stdc++.h>
using namespace std;
class MinStack {
	stack<int> s;
	stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(min.size()==0 || min.top()>=val)
        	min.push(val);
    }
    
    void pop() {
    	if(s.top()==min.top())
           {
           	s.pop();
           	min.pop();
           }
        else
          s.pop();   
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(min.empty())
        	return -1;
        return min.top();
    }
    
};
int main()
{
   MinStack M;
   for(int i=1;i<=10;i++)
   {
   	 M.push(i);
   }
   M.push(0);
   M.pop();
   //M.pop();
  // M.pop();

   cout<<"Top :"<<M.top()<<endl;
   cout<<"Min :"<<M.getMin()<<endl;
}
 