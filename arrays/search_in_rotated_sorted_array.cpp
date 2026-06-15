// Problem: Search in Rotated Sorted Array
// Approach:
// - Use Binary Search to achieve O(log n) time.
// - At each step, determine which half of the array is sorted.
// - Check whether the target lies in the sorted half.
// - Discard the other half and continue searching.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e ){
            mid=s+(e-s)/2;
if(nums[mid]==target){
                return mid;
            }
else if(nums[mid]>target){
                if(nums[s] <= nums[mid]) {
                   if(nums[s] <= target && target < nums[mid]){
                    e = mid - 1;
                }
                else{
                    s=mid+1;
                }
                }
            else{
                            e=mid-1;
                         }
                
            }
 else{
        
        if(nums[e]>=nums[mid]){
           if(nums[mid] < target && target <= nums[e]){
            s=mid+1;
           }
           else{
            e=mid-1;
           }
        }
        
        else{
            s=mid+1;
        }
        }
        }
        return -1;
    }
};
