class Solution {
    
    bool isValid(vector<vector<char>>& board, int row, int col, char c)
    {
        for(int i = 0; i<9; i++)
        {
            // for checking column
            if(board[i][col] == c){
                return false;
            }
                
            // for checking row
            if(board[row][i] == c){
                return false;
            }
    
            // for checking 3x3 matrix
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c){
                return false;
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board)
    {
        // int n = board.size();
        // int m = board[0].size();
        
        for(int i = 0; i<board.size(); i++)
        {
            for(int j = 0; j<board[0].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c = '1'; c<='9'; c++)
                    {
                        if(isValid(board,i,j,c))
                        {
                            board[i][j] = c;
                            
                            if(solve(board) == true)
                            {
                                return true;
                            }
                            else{
                                board[i][j] = '.';
                            }
                        }
                        
                    }
                 return false;
                    
                }
                
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board)
    {
        solve(board);
    }
};