#include <iostream>
using namespace std;
struct ListNode {
   int val;
   struct ListNode *next;
   ListNode(int data)
   {
      val = data;
      next = NULL;
   }
};
/*struct ListNode* head = NULL;
void insert(int new_data) {
   struct ListNode* new_node = (struct ListNode*) malloc(sizeof(struct ListNode));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
      if(head==NULL)
         return false;
      ListNode *slow = head;
      ListNode  *fast = head;
      while(fast != NULL && fast->next !=NULL)
      {
         fast=fast->next->next;
         slow=slow->next;
         if (fast==slow)
            return true ;
      }
      return false;
        
    }
};
void display(ListNode *head) {
   struct ListNode* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->val <<" ";
      ptr = ptr->next;
   }
}
int main() {
   /*insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();*/
   
   ListNode *head = new ListNode(5);
   ListNode *Node2 = new ListNode(6);
   ListNode *Node3 = new ListNode(7);
  // ListNode *head = new ListNode();
   //head->val=8;
   //head->next=Node1;
   head->next=Node2;
   Node2->next=Node3;
   //Node3->next=head;
   Solution S;
   cout<<S.hasCycle(head)<<endl;

  // display(head);



   return 0;
}