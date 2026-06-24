// Exponentiation by Squaring (Recursive)
// Time Complexity: O(log n)
// Space Complexity: O(log n)  // recursion stack
// Handles negative exponents and INT_MIN edge case

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
