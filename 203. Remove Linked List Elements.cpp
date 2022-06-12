#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int data)
	{
      val=data;
      next=NULL;
	}

};
void display(ListNode *head)
{
       ListNode *temp =head;
       while(temp!=NULL)
       {
         cout<<temp->val<<" ";
         temp = temp->next;
       }
       cout<<endl;

}
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    	vector<ListNode> *ans ;
    	int x = val;
    	ListNode *result = new ListNode(-1);
    	ListNode *ptr=result;
    	ListNode *temp= head;
    	int i=0;
    	while(temp!=NULL)
    	{ 
    	  if(temp->val !=x )
    	  {
    	  	ListNode *ans = new ListNode(temp->val);
    	  	result ->next = ans;
    	  	result = ans;
    	  }
     	  temp = temp->next; 	  
    	}
    	return ptr->next;
  
    	
        
    }
};
int main()
{
	ListNode *head = new ListNode(1);
	ListNode *head_n2=new ListNode(2);
	ListNode *head_n3=new ListNode(6);
	ListNode *head_n4= new ListNode(3);
	ListNode *head_n5 = new ListNode(4);
	ListNode *head_n6 = new ListNode(6);
	ListNode *head_n7 = new ListNode(6);
	head->next = head_n2;
	head_n2->next = head_n3;
	head_n3->next = head_n4;
	head_n4->next=head_n5;
	head_n5->next = head_n6;
	head_n6->next=head_n7;
	Solution S;
	int val=6;
	 ListNode *ans=S.removeElements(head,val);
	 display(ans);

}