class Solution {
    bool solve(int row, int col,int len,int n, int m, vector<vector<char>>& board, string &word)
    {
        char ch = board[row][col];
        board[row][col] = '#';
        if(len == word.size()){
            return true;
        }
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int i = 0; i<4; i++)
        {
            int r = row + delrow[i];
            int c = col + delcol[i];
            if(r>=0 && c>=0 && r<n && c<m && board[r][c] != '#' )
            {
                if(word[len] == board[r][c] && solve(r,c,len+1,n,m,board,word)){
                    return true;
                }
            }
        }
        
        board[row][col] = ch;
        return false;
        
    }
public:
    bool exist(vector<vector<char>>& board, string word)
    {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,-1));
        
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(board[i][j] == word[0] && solve(i,j,1,n,m,board,word))
                {
                    return true;
                }
            }
        }
        return false;
        
//         stack<char> store;
//         for(int i = word.size()-1; i>=0; i--)
//         {
//             store.push(word[i]);
//         }
        
//         queue<pair<int,int>> q;
//         q.push({0,0});
        
//         int delrow[] = {-1,0,1,0};
//         int delcol[] = {0,1,0,-1};
//         while(!q.empty())
//         {
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
            
//             if(board[row][col] == store.top()){
//                 store.pop();
//                 vis[row][col] = 1;
//             }
            
//             for(int i = 0; i<4; i++)
//             {
//                 int r = row + delrow[i];
//                 int c = col + delcol[i];
//                 if(r>=0 && c>=0 && r<n && c<m && board[r][c] == store.top() && !vis[r][c] )
//                 {
//                     vis[r][c] = 1;
//                     q.push({r,c});
//                     store.pop();
//                 }
//             }
//         }
        
//         return store.empty();
        
    }
};