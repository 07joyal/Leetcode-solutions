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
vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* curr = root;

        while (curr != NULL || !s.empty()) {
            
          
            while (curr != NULL) {
                s.push(curr);
                curr = curr->left;
            }

            curr = s.top();
            s.pop();
            ans.push_back(curr->val);

            
            curr = curr->right;
        }

        return ans;
    }

    bool isValidBST(TreeNode* root) {
       vector<int> arr= inorderTraversal(root);
       for(int i = 1; i < arr.size(); i++) {
      if(arr[i] == arr[i-1]) {
        return false; 
    }
}

        if(is_sorted(arr.begin(), arr.end())){
            return true;
        }
        return false;
    }
};
