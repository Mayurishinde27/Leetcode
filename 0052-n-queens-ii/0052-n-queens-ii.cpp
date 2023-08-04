class Solution {
    
    bool isSafe(int r, int c, vector<string> board, int n)
    {
        int row = r;
        int col = c;
        
        // diagonal top
        while(row >=0 && col >=0)
        {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        row = r;
        col = c;
        // right to left
        while(col >=0)
        {
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
        row = r;
        col = c;
        // diagonal bottom
        while(row <n  && col >=0)
        {
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    
    void solve(int col, vector<string> &board, int n, int &count)
    {
        if(col == n)
        {
            count++;
            return;
        }
        
        for(int row = 0; row<n; row++)
        {
            if(isSafe(row,col,board,n)){
                
                board[row][col] = 'Q';
                solve(col+1, board,n,count);
                board[row][col] = '.';
            }
        }
    }
    
public:
    int totalNQueens(int n)
    {
        vector<string> board(n);
        string s(n,'.');
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            board[i] = s;
        }
        solve(0,board,n,count);
        return count;
        
    }
};