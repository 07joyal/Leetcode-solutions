class Solution {
public:
    void inorder(TreeNode* root, int& diff, long long& prev, bool& first) {
        if (root == NULL)
            return;

        inorder(root->left, diff, prev, first);

        if (!first) {
            diff = min(diff, (int)(root->val - prev));
        }

        prev = root->val;
        first = false;

        inorder(root->right, diff, prev, first);
    }

    int minDiffInBST(TreeNode* root) {
        int diff = INT_MAX;
        long long prev = 0;
        bool first = true;

        inorder(root, diff, prev, first);

        return diff;
    }
};
