#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int data)
	{
		val = data;
		left= NULL;
		right = NULL;
	}
};

class Solution {
public:
	
    vector<int>tr;
    int i  ;
	vector<int> inorderTraversal(TreeNode* root)
    	{
    		i++;
          TreeNode *temp;
          temp=root;
          if(temp!=NULL)
          {
          	inorderTraversal(temp->left);
          	
          	tr.push_back(temp->val+i);
          	inorderTraversal(temp->right);
          	
          }
          return tr;

      }
           
    bool isSameTree(TreeNode* p, TreeNode* q) {
    	i=1;
       vector<int>result1= inorderTraversal(p);
        i=1;       
       tr.clear();
      vector<int>result2= inorderTraversal(q);
        for(auto &el : result1 )
        	cout<<el<<" ";
        cout<<endl;
        for(auto &el : result2)
        	cout<<el<<" ";
        cout<<endl;
       
       if(result1==result2)
       return true;
       return false ;
        
    }
};
int main()
{
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
   root2->right = new TreeNode(3);

    Solution S;
    cout<<S.isSameTree(root1,root2)<<endl;

}