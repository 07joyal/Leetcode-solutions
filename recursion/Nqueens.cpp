Time: O(n! × n)
Space: O(n²) (excluding output)


class Solution {
public:

bool check(int i,int n,int j,vector<string>&board){
int row=i;
int col=j;
    while(row>-1 && col>-1){
        if (board[row][col]=='Q')
        return 0;
        row--;
        col--;
    }
    row=i;
    col=j;
    while(row>-1 && col<n){
        if (board[row][col]=='Q')
        return 0;
        row--;
        col++;
    }
    return 1;
}
void find( vector<string>&board,vector<bool>&column,vector<vector<string>>&ans,int row,int n){
 if(row==n){
    ans.push_back(board);
    return;
 }

    for(int j=0;j<n;j++){
        if(column[j]==0 && check(row,n,j,board)){
            column[j]=1;
            board[row][j]='Q';
            find(board,column,ans,row+1,n);
            column[j]=0;
            board[row][j]='.';
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        vector<bool>column(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i].push_back('.');
            }
        }
        
        vector<vector<string>>ans;
        
        find(board,column,ans,0,n);
        return ans;
        
    }
};
