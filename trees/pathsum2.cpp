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
void soln(TreeNode* root, int targetSum,int sum,vector<int>&temp, vector<vector<int>>&ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL && sum==targetSum){
            ans.push_back(temp);   
            return;
        }
     if(root->left==NULL && root->right==NULL && sum!=targetSum){
            return ;
        } 
        if(root->left){
            temp.push_back(root->left->val);
             soln(root->left,targetSum,sum+root->left->val,temp,ans);  
             temp.pop_back();   
        }
        
        if(root->right){
            temp.push_back(root->right->val);
          soln(root->right,targetSum,sum+root->right->val,temp,ans);  
          temp.pop_back(); 
        }
       
  }
 vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        vector<vector<int>>ans;
        if(root==NULL ){
            return vector<vector<int>>();
        }
        temp.push_back(root->val);
        int sum=root->val;
     soln(root,targetSum,sum,temp,ans);
     return ans;
    }
};
