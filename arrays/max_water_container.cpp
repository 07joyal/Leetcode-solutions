//LEETCODE-11
//Approach- two pointer optimised solution
//Time complexity-O(n)
//Space complexity-O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();  //number of vertical lines
         int max=INT_MIN; //initializing with minimum value
        
            int start=0,end=n-1;
            
            while(start<end)
            {
                int area=(end-start)*(min(height[start],height[end])); //calculate area with current pair of lines
                if(area>max){
                    max=area; //update maximum area
                }
              //move the pointer to find longer lines
                if(height[start]<height[end]){
                    start++;
                }
                else{
                    end--;
                }
               
            }
        
         return max; // returns maximum area
        
    }
};
