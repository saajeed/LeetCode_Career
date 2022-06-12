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

      int maxDepth(TreeNode* root) {
            if(root == NULL)
                  return 0;

            return max(maxDepth(root->left),maxDepth(root->right))+1;
        
    }
};
 int main()
{

   TreeNode* root = new TreeNode(3);
   root->left = new TreeNode(9);
   root->right = new TreeNode(20);
   root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
   Solution S;
   cout<<S.maxDepth(root)<<endl;
}