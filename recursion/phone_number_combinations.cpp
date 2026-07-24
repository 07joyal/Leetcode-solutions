class Solution {
public:

void solve(int n,vector <string> &map,int index,vector<string>&ans,string output,string digits){
    if(index==n){
  ans.push_back(output);
  return;
    }
    int number=digits[index]-'0';
    string value=map[number];
    for(int i=0;i<value.length();i++){
        output+=value[i];
        solve(n,map,index+1,ans,output,digits);
        output.pop_back();
     }

       
       
}
    vector<string> letterCombinations(string digits) {
      vector<string>ans;
     string output;
        int n=digits.length();
      vector   <string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        solve(n,map,index,ans,output,digits);
        return ans;
    }
};
