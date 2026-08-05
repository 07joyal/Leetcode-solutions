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
TreeNode* soln(vector<int>& preorder, vector<int>& inorder,int start,int end,int index,int pos){
    if(start>end){
        return NULL;
    }
    TreeNode* x=new TreeNode (preorder[index]);
    pos=find(start,end,x,inorder,pos);
    
   
   x->left= soln(preorder,inorder,start,pos-1,index+1,pos);
 x->right=  soln(preorder,inorder,pos+1,end,index+(pos-start)+1,pos);
 return x;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int start=0;
        int end=inorder.size()-1;
        int index=0;
        int pos;
      return  soln(preorder,inorder,start,end,index,pos);
         
    }
};
