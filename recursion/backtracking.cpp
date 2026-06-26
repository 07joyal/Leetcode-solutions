// subsets
// TC: O(n * 2^n)
// SC: O(n * 2^n)

class Solution {
public:

 void subseq(vector<int>& arr,int index,int n, vector<vector<int>>& ans,vector<int>temp){
   
  if(index==n){
    ans.push_back(temp);
    return ;
  }
 subseq(arr,index+1,n,ans,temp);
 temp.push_back(arr[index]);
 subseq(arr,index+1,n,ans,temp);

 }


    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans1;
        vector<int>sub;
        subseq(nums,0,nums.size(),ans1,sub);
        return ans1;
    }
    
};

