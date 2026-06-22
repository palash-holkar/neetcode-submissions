/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(!root)
            return root;
            
       swap(root);

       return root;
    }

    TreeNode* swap(TreeNode* r)
    {
         auto*temp = r->left;
            r->left=r->right;
            r->right=temp;
            if( r->left)
                swap(r->left);
           
            if(r->right)
                swap(r->right);
           
            return r;
    }

    
};
