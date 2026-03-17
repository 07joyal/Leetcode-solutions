//LEETCODE-724
//FIND PIVOT POINT
//Approach: running sum
//Time complexity :O(n)
//Space complexity : O(1)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(); 
        
        int leftsum=0,rightsum=0;
        for(int i=0;i<n;i++){
            
            rightsum=rightsum+nums[i]; //find total sum of array
            
          }
          for(int i=0;i<n;i++){
            rightsum=rightsum-nums[i]; //subtract current element from total sum
            
            if(leftsum==rightsum){
                return i;      //if sum of elements on left equals sum of elements on right
                
            }
            leftsum=leftsum+nums[i]; //update left sum
          }
       
        return -1; //return -1 if no pivot index found
       

    }
};
