class Solution {
public:
void perm(vector<int>& arr, vector<int>& temp,int n,int index,vector<int>&visit,vector<vector<int>>&ans){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    int i;
    for(i=0;i<n;i++){
        if(visit[i]==0){
            temp.push_back(arr[i]);
            visit[i]=1;
            perm(arr,temp,n,index+1,visit,ans);
            visit[i]=0;
            temp.pop_back();
        }
        
    }
   
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp1;
        vector<int>visit1(nums.size(),0);
        vector<vector<int>>ans1;
        perm(nums,temp1,nums.size(),0,visit1,ans1);
        return ans1;
    }
};
