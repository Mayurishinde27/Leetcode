class Solution {
    
    int present(char ch, string key)
    {
        for(int i = 0; i<key.size(); i++)
        {
            if(key[i] == ch)
            {
                return 1;
            }
        }
        return 0;
    }
    
public:
    int shortestPathAllKeys(vector<string>& adj)
    {
        
        int n = adj.size();
        int m = adj[0].size();
        
        queue<pair<pair<int,int>,string>> q;  //{row, col},key
        
        int total_keys = 0; 

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(adj[i][j] == '@')
                {
                    q.push({{i,j},""});
                }
                
                if(adj[i][j] >= 'a' && adj[i][j] <= 'f')
                {
                    total_keys++;
                }
            }
        }

        unordered_set<string> store;   // to store keys
        int steps = 0;
        
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
    
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i<size; i++)
            {
                int row = q.front().first.first;
                int col = q.front().first.second;
                string k = q.front().second;

                q.pop();
                
                if(k.size() == total_keys){
                    return steps;
                }
                
                string unique_key = to_string(row) + ":" + to_string(col) + ":" + k;
                if(store.find(unique_key) != store.end()) continue;
                store.insert(unique_key);
                
                for(int i = 0; i<4; i++)
                {
                    int r = row + delrow[i];
                    int c = col + delcol[i];

                    if(r>=0 && c>=0 && r<n && c<m && adj[r][c] != '#')
                    {
                        char ch = adj[r][c];
                        
                        if((ch >= 'A' && ch <= 'F' && present(ch+32 , k)))
                        {
                            q.push({{r,c},k});
                        }
                        
                        else if(ch == '.' || ch == '@'){
                            q.push({{r,c},k});
                        }
                        
                        else if(ch >= 'a' && ch <= 'f'){
                            if(present(ch,k)){
                                q.push({{r,c},k});
                            }
                            else{
                                q.push({{r,c},k+ch});
                            }
                        }
                    }
                }
               
            }
            steps++;
            
        }
        
        return -1;
        
    }
};




