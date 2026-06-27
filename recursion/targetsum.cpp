//Leetcode - 494
// Recursive backtracking: for each element, choose '+' or '-' 
//
// Time Complexity: O(2^n)
// Space Complexity: O(n)  // recursion stack depth

class Solution {
public:
 void targetsum(vector<int> & arr,int n,int index,int target1,int sum,int& ans){
if(index==n && sum!=target1){
    return;
}

if(sum==target1 && index==n){
    ans+=1;
    return;
}


   
        targetsum(arr,n,index+1,target1,sum+arr[index],ans);
      
     
        targetsum(arr,n,index+1,target1,sum-arr[index],ans);
       
 }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n1=nums.size();
        int ans1=0;
        targetsum(nums,n1,0,target,0,ans1);
        return ans1;

    }
};
