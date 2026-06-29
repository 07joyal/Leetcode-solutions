class Solution {
public:
bool shouldSwap(vector<int>& arr,int start,int curr){
    for(int i=start;i<curr;i++){
        if(arr[i]==arr[curr])
            return false;
    }
    return true;
}
void perm(vector<int>arr,int index,int n,vector<vector<int>>&ans){
int i=index;
    if(index==n){
      ans.push_back(arr);
      return;
    }
    
   for(i=index;i<n;i++){
    if(!shouldSwap(arr,index,i))
        continue;
        swap(arr[index],arr[i]);
        perm(arr,index+1,n,ans);
        swap(arr[index],arr[i]);
        
    }
}

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1=nums.size();
        vector<vector<int>>ans1;
        perm(nums,0,n1,ans1);
        return ans1;
    }
};
