#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
 TreeNode ( int data)
 {
 	val=data;
 	left = NULL;
 	right = NULL;

 }
};

class Solution {
public:
	vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL)
        {
        	postorderTraversal(root->left);
        	postorderTraversal(root->right);
        	ans.push_back(root->val);
        }
        return ans;
    }
};
int main()
{
   TreeNode *root = new TreeNode(1);
   root->right = new TreeNode(2);
   root->right->left = new TreeNode(3);
   Solution S; 
   vector<int> result =  S.postorderTraversal(root);
   for(auto &el: result)
   	  cout<<el<<" ";
}