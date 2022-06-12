#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
	int val;
	ListNode *next;
	ListNode()
	{
      val=0;
      next=NULL;
	}
	ListNode(int data)
	{
		val=data;
		next=NULL;
	}

};
void display(ListNode *ans)
{
	while(ans!=NULL)
	{
		cout<<ans->val<<" ";
		ans=ans->next;
	}
	cout<<endl;
}
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	  set<int, greater<int> > s;
    	while(head !=NULL)
    	{
          s.insert(head->val);
          head=head->next;
    	}
    	//reverse (s.begin(),s.end());
    	ListNode *ans=NULL;
    	for(auto &el: s)
    	{
    		ListNode *new_node = new ListNode();
    		new_node->val = el;
    		new_node->next = ans;
    		ans=new_node;
    	}
    	return ans;

        
    }
};
int main()
{

 ListNode *head = new ListNode(1);
 ListNode *head_n2 = new ListNode(1);
 ListNode *head_n3 = new ListNode(2);
 ListNode *head_n4 = new ListNode(3);
 ListNode *head_n5 = new ListNode(3);
 head->next=head_n2;
 head_n2->next=head_n3;
 head_n3->next=head_n4;
 head_n4->next=head_n5;
 display(head);
 Solution S;
 display(S.deleteDuplicates(head));

}