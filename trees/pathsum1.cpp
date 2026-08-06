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
bool sum1(TreeNode* root, int targetSum,int sum,bool a, bool b){
    if(root==NULL){
        return false;
    }
    if(root->left==NULL && root->right==NULL && sum==targetSum){
            return true;
        }
        
     if(root->left==NULL && root->right==NULL && sum!=targetSum){
            return false;
        }
        
        if(root->left){
            a=sum1(root->left,targetSum,sum+root->left->val,a,b);
        }
        if(root->right){
            b=sum1(root->right,targetSum,sum+root->right->val,a,b);
        }
        
       return a||b;
        
        
        
    
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL ){
            return false;
        }
        bool a,b;
        int sum=root->val;
        return sum1(root,targetSum,sum,a,b);

        
    }
};
