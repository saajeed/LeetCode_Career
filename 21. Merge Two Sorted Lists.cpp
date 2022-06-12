#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode()
  {
  	val=0;
  	next = NULL;
  }
  ListNode(int data)
  {
  	val=data;
  	next = NULL;
  }
  ListNode(int data,ListNode *link)
  {
  	val=data;
  	next=link;
  }
};
void display(ListNode *list1){

  while(list1!=NULL)
  {
  	cout<<list1->val<<" ";
  	list1=list1->next;

  }
  

}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    	vector <int> result;
    	
    	while(list1 !=NULL )
    	{
    		
    			result.push_back(list1->val);
    			list1=list1->next;
    		
    	}
    	while(list2!=NULL)
    	{
    		
    			result.push_back(list2->val);
    			list2=list2->next;
    		
    	}
    	//cout<<result[0]<<endl;
    	sort(result.begin(),result.end());
    	reverse(result.begin(),result.end());
    	ListNode *ans=NULL;
    	for(auto &el:result)
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
  //First List
  ListNode *list1=new ListNode(1);
  ListNode *list1_n2=new ListNode(2);
  ListNode *list1_n3=new ListNode(4);
  list1->next = list1_n2;
  list1_n2->next = list1_n3;


  //Second List

  ListNode *list2=new ListNode(1);
  ListNode *list2_n2=new ListNode(3);
  ListNode *list2_n3=new ListNode(4);
  list2->next = list2_n2;
  list2_n2->next=list2_n3;
  Solution S;
  
  display(S.mergeTwoLists(list1,list2));


} 