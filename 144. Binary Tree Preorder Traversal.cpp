#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int data)
  {
  	val=data;
  	left=NULL;
  	right=NULL;
  }

};
class Solution {
public:
	  vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
      
        if(root!=NULL)
        {
        	
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        }
       // for(auto &el: ans)
        	//cout<<el<<" ";
 
        return ans;
    }
};
int main()
{

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
   // root->right->left = new TreeNode(3);
 
    Solution S;
       vector<int>result = S.preorderTraversal(root);
  
     for(int i=0;i<result.size();i++)
     	cout<<result[i]<<" ";
  


}