//Leetcode-50
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
// Time Complexity: O(log n)
// Space Complexity: O(log n)  // recursion stack
//Constraints:
// -100.0 < x < 100.0
// -231 <= n <= 231-1
// n is an integer.
// Either x is not zero or n > 0.
// -104 <= xn <= 104

class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==INT_MIN){
            long long a=n;
            
            double half=myPow(1/x,-a/2);
             if(a%2==0){
            return half*half;
        }
        else{
            return (1/x)*half*half;
        }
            
        }
        if(n==0){
            return 1;
        }
        if(n<0){
            double half=myPow(1/x,-n/2);
             if(n%2==0){
            return half*half;
        }
        else{
            return (1/x)*half*half;
        }
        }
        else{
        double half=myPow(x,n/2);
        if(n%2==0){
            return half*half;
        }
        else{
            return x*half*half;
        }
        }
    }
};
