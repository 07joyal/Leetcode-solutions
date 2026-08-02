// TC: O(n)
// Each node is visited exactly once during the level order traversal.

// SC: O(n)
// Queue stores nodes of a level, and the vector stores the sum of each level.

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int sum=0;
        vector<int>arr;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* a=q.front();
                sum+=a->val;
                q.pop();
                
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }
                 }
        arr.push_back(sum);
        sum=0;
        }
        int max=INT_MIN;
        int idx;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                idx=i;
            }
        }
   return idx+1;;
    }
};
