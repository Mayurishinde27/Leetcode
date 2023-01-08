class Solution {
public:
    int maxPoints(vector<vector<int>>& point)
    {
        int count = 1;
        
        int maxr = point.size();
        
        for(int i = 0; i<maxr; i++)
        {
            unordered_map<double,int> m;
            
            for(int j = 0; j<maxr; j++)
            {
                if(i == j)
                {
                    continue;
                }
                
                double p1 = (point[i][0] - point[j][0]);
                double p2 = (point[i][1] - point[j][1]);
                
                double val =  p1 / p2; 
                double tan = atan(val);
                m[tan]++;
                
                count = max(count, m[tan]+1);
            }
        }
        return count;


//         int count = 1;
//         int maxr = point.size();
//         int maxc = point[0].size();
        
//         sort(point.begin(), point.end());
        
//         for(int i = 0; i<maxr-1; i++)
//         {
//             for(int j = 0; j<maxc-1; j++)
//             {
//                 int res1 = abs(point[i+1][j] - point[i][j]); // 1
//                 int res2 = abs(point[i+1][j+1] - point[i][j+1]); // 1
//                 if(res1 == res2)
//                 {
//                     count++;  // 1
//                     break;
//                 }
                
//                 // [1,1]
//                 // [2,2]
//                 // [3,3]
//             }
//         }
//         return count;
        
    }
};