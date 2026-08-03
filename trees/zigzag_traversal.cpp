class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>temp;
        vector<vector<int>>ans;
        if(root==NULL){ return vector<vector<int>>(); }
        queue<TreeNode* >q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* a=q.front();
                temp.push_back(a->val);
                  q.pop();
            
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }
                 }
        level++;
        if(level%2!=0){
            reverse(temp.begin(), temp.end());

           }
       ans.push_back(temp);
       temp.clear();
        
        }
        return ans;
    }
};
