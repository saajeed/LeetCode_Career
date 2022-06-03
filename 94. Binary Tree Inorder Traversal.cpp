#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int data)
      {
      	val = data;
      	left = NULL;
      	right = NULL;
      	//cout<<data<<" "<<endl;
      }
  };
 
class Solution {
public:
		vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {

    
    	TreeNode *temp = root;
    	if(temp != NULL)
    	{
    		inorderTraversal(temp->left);
    		ans.push_back(temp->val);
    		inorderTraversal(temp->right);
    	}

    	return ans;

        
    }
};
int main()
{

   TreeNode* root = new TreeNode(1);
   //root->left = new TreeNode(NULL);
   root->right = new TreeNode(2);
   root->right->left = new TreeNode(3);
   Solution S;
   vector<int> result;
   result=S.inorderTraversal(root);
  for(auto &i: result)
   	cout<<i<<" ";

}