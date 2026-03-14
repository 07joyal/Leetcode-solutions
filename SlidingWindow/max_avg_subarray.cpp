//LEETCODE 643-Maximum average subarray
//Time complexity- O(n)
//Space complexity- O(1)
//Approach- Sliding Window

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=k-1;
        double sum=0;
        double  avg;
         
        while(left<=right){
            sum=sum+nums[left]; //calculate sum of first window initially
            left++;
                     }
                     
        double max_sum=sum;
        left=0;
        right=k;
        
        while(right<n){
            //sliding the window
               sum=sum-nums[left];
               sum=sum+nums[right];
               left++;
               right++;
               max_sum=max(max_sum,sum); //update maximum sum after sliding
        }
        
        avg=max_sum/k;//maximum average is returned by max sum
         return avg;
        
    }
};
