// LeetCode 22 - Generate Parentheses
// Backtracking approach
//
// Time Complexity: O(Cn * n)
// where Cn is the nth Catalan number (number of valid combinations)
//
// Space Complexity: O(n)


class Solution {
public:
   void par(int n1,int open,int close,vector<string>& ans,string t){
     if(open==n1 && close==n1){
        ans.push_back(t);
        
        
        return;
     }
     
    
    if(close>open){
        return;
    }
    if(open < n1){
   
    par(n1,open+1,close,ans,t+'(');
    }
    if(close <open){
     
    par(n1,open,close+1,ans,t+')');
    }


   }



    vector<string> generateParenthesis(int n) {
        int open1=0;
        int close1=0;
        string t1;
      vector<string> ans1;
      par(n,open1,close1,ans1,t1);
        return ans1;
    }
};
