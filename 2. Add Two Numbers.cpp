#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int data)
	{
		val=data;
		next = NULL;
	} 

};
void display(ListNode *l1)
{
  while(l1!=NULL)
  {
  	cout<<l1->val<<" ";
  	l1=l1->next;
  }
  cout<<endl;

}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    	int carry=0;
    	
    	ListNode *temp=new ListNode(-1);
    	ListNode *ans=temp;
    	while(l1!=NULL || l2!=NULL || carry!=0)
    	{
    		int sum=0;

    

    		if(l1!=NULL)
    		{
    			sum=sum+l1->val;
    			l1=l1->next;
    		}
    		if(l2!=NULL)
    		{
    			sum=sum+l2->val;
    			l2=l2->next;
    		}

            sum=sum+carry;
            carry=sum/10;
            ListNode *x = new ListNode(sum%10);
            temp->next=x;
            temp=x;

    	}
    	return ans->next;
        
    }
};
int main()
{

  ListNode *l1 = new ListNode(2);
  ListNode *l1_n2 = new ListNode(4);
  ListNode *l1_n3 = new ListNode(3);
  l1->next = l1_n2;
  l1_n2->next = l1_n3;



  ListNode *l2 = new ListNode(5);
  ListNode *l2_n2 = new ListNode(6);
  ListNode *l2_n3 = new ListNode(4);
  l2->next = l2_n2;
  l2_n2->next = l2_n3;
  Solution S;

  display(S.addTwoNumbers(l1,l2));

}