class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> ans;
        int left = 0;    
        int right = m-1;  
        int top = 0;  
        int bottom = n-1;  
        
        int direction = 1;
        
        
        while(left <= right && top <= bottom)
        {
            // left->right
            if(direction == 1)
            {
                for(int i = left; i<=right; i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                
                direction = 2;
            }

            // top -> bottom
            else if(direction == 2){
                for(int i = top; i<=bottom; i++)
                {
                     ans.push_back(matrix[i][right]);
                }
                right--;
                direction = 3;
            }

            // right -> left

            else if(direction == 3){
                for(int i = right; i>= left; i--)
                {
                     ans.push_back(matrix[bottom][i]);
                }
                bottom --;
                direction = 4;
            }

            // bottom -> top
            else if(direction == 4){
                for(int i = bottom; i>= top; i--)
                {
                     ans.push_back(matrix[i][left]);
                }
                left++;
                direction = 1;
            }
        }
        
        return ans;
    }
};