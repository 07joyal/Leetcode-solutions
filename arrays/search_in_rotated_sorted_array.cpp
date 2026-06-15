//Binary search
//Time complexity-O(log n)
//Space complexity-O(1)
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
