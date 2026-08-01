//Time Complexity: O((log n)^2)
//Space Complexity: O(log n)


// Find the leftmost and rightmost heights of the subtree.
// If they are equal, the subtree is perfect, so return (2^h - 1).
// Otherwise, recursively count nodes in the left and right subtrees.

class Solution {
public:
int left1(TreeNode* root){
    int count=0;
    while(root){
        root=root->left;
        count++;
    }
    return count;
}
int right1(TreeNode* root){
    int count=0;
    while(root){
        root=root->right;
        count++;
    }
    return count;
}
int count1(TreeNode* root){
    if(root==NULL){
        return 0 ;
       }
   int left= left1(root);
   int right= right1(root);
    if(left==right){
        return pow(2, left)-1;
    }
       return 1+ count1(root->left) + count1(root->right);
}
    int countNodes(TreeNode* root) {
      if(root==NULL){
        return 0;
       }
      return count1(root);
        
    }
};
