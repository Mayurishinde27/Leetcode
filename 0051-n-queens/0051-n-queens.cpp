class Solution {
    
    bool isSafe(int row, int col, vector<string> board, int n)
    {
        int nrow = row;
        int ncol = col;
        
        // for checking in upper diagonal direction (row-1,col-1)
        
        while(nrow >= 0 && ncol >=0)
        {
            if(board[nrow][ncol] == 'Q') return false;
            nrow--;
            ncol--;
        }
        
        nrow = row;
        ncol = col;
        
        // for checking right to left direction
        while(ncol >= 0)
        {
            if(board[nrow][ncol] == 'Q') return false;
            ncol--;
        }
        
        nrow = row;
        ncol = col;
        
        // for checking lower diagonal
        while(nrow < n && ncol >=0)
        {
            if(board[nrow][ncol] == 'Q') return false;
            ncol--;
            nrow++;
        }
        
        return true;
    }
    
    void solve(int col,vector<vector<string>>&ans, vector<string>&board, int n)
    {
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row<n; row++)
        {
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1, ans,board,n);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i = 0; i<n; i++)
        {
            board[i] = s;
        }
        
        solve(0,ans,board,n);
        return ans;
        
    }
};