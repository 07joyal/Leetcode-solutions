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
int find(int start,int end,TreeNode* x,vector<int>& inorder,int pos){
for(int i=start;i<=end;i++){
        if(inorder[i]==x->val){
            pos=i;
            break;
        }
    }
    return pos;
}
TreeNode* soln(vector<int>& postorder, vector<int>& inorder,int start,int end,int index,int pos){
    if(start>end){
        return NULL;
    }
    TreeNode* x=new TreeNode (postorder[index]);
    pos=find(start,end,x,inorder,pos);
   x->right= soln(postorder,inorder,pos+1,end,index-1,pos); 
   x->left=  soln(postorder,inorder,start,pos-1,index-(end-pos)-1,pos);
   
 
 return x;

}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int start=0;
        int end=inorder.size()-1;
        int index=postorder.size()-1;
        int pos;
      return  soln(postorder,inorder,start,end,index,pos);
    }
};
