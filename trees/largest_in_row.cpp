// TC: O(n)
// SC: O(n)
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL){
            return vector<int>() ;
        }
        int max=INT_MIN;
        vector<int>arr;
        vector<int>ans;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* a=q.front();
                arr.push_back(a->val);
                  q.pop();
                
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }
                 }
                for(int i=0;i<arr.size();i++){
                    if(arr[i]>max){
                        max=arr[i];
                    }
                }
                arr.clear();
        ans.push_back(max);
        max=INT_MIN;
       

        }
    return ans;
    }
};
