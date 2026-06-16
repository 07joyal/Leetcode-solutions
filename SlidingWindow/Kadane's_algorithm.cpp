//LEETCODE- 53
//Maximum subarray
//Time complexity-O(n)
//Space complexity -O(1)
//Approach- kadane's algorithm


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int left=0; //variable to iterate through array
        int sum=0; //current sum
        int max_sum=INT_MIN; //initialize max sum to minimum value
        
        while(left<n){
             sum=sum+nums[left];
           
             if(sum>max_sum){
                   max_sum=sum; //updating maximum sum
                            }
            
            if(sum<0){
                        sum=0; //if sum is negative,drop the sum to 0
                      
                    }
                    
                        left++; //move to next element
                   
        }
        
        return max_sum;
    }
};
