#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
  int val ;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int root)
  {
    val = root;
    left = NULL;
    right = NULL;
  }
};
class Solution {
public:
	bool checkTree(TreeNode *leftTree, TreeNode *rightTree)
	{
		 if(leftTree == NULL && rightTree ==NULL)
		 	return true;
		 if(leftTree == NULL || rightTree== NULL)
		    return false;

		   
		 
		  return(leftTree->val == rightTree->val) and 
		  checkTree(leftTree->left,rightTree->right) and 
		  checkTree(leftTree->right,rightTree->left);	
         

	}
    bool isSymmetric(TreeNode* root) {
    	if (root == NULL)
    		return true;
        return(checkTree(root->left,root->right));
    }
};
int main()
{
   TreeNode *root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->left->left = new TreeNode(3);
   root->left->right = new TreeNode(4);
   root->right = new TreeNode(2);
   root->right->left = new TreeNode(4);
   root->right->right = new TreeNode(3);
   Solution S;
   cout<<S.isSymmetric(root)<<endl;

}