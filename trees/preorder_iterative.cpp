// TC: O(n) - each node is visited once.
// SC: O(h) , h=height

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return vector<int>();
        }
        stack<TreeNode*>s;
        s.push(root);
        vector<int>ans;
        TreeNode* a;
        while(!s.empty()){
             a=s.top();
             s.pop();
             ans.push_back(a->val);
             if(a->right!=NULL){
                s.push(a->right);
             }
             if(a->left!=NULL){
                s.push(a->left);
             }

        }
        return ans;
        
    }
};
