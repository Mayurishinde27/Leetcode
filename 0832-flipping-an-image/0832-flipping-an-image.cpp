class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
    {
        vector<vector<int>> vec;
        vector<int> v;
        
        int maxr = image.size();
        int maxc = image[0].size();
        
        for(int i = 0; i<maxr; i++)
        {
            for(int j = 0; j<maxc; j++)
            {
                if(image[i][j] == 1)
                {
                    v.push_back(0);
                }
                else if(image[i][j] == 0)
                {
                    v.push_back(1);
                }
            }
            reverse(v.begin(),v.end());
            
            vec.push_back(v);
            v.clear();
        
        }
        
        return vec;
        
    }
};