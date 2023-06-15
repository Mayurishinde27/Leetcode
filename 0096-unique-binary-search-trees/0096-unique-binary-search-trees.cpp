class Solution {
public:
    
    int catalan_number(int n)
    {
        int catalan[n+1];
        catalan[0] = 1;
        catalan[1] = 1;
        
        for(int i = 2; i<=n; i++)
        {
            catalan[i] = 0;
            for(int j = 0; j<i; j++)
            {
                catalan[i] += catalan[j] * catalan[i-j-1];
            }
        }
        return catalan[n];
    }
    int numTrees(int n)
    {
        return catalan_number(n);
    }
};


// 1 - 1
// 2 - 2
// 3 - 5    
// 4 - 14   
// 5 - 42   
// 6 - 132  