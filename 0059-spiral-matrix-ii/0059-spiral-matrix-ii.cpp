class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n,vector<int>(n,0));
              
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        
        int num = 1;
        while(top <= bottom && left <= right)
        {
            //left-right
            for(int i = left; i<= right; i++)
            {
                matrix[top][i] = num;
                num++;
            }
            top++;
            
            //top-bottom
            for(int i = top; i<= bottom; i++)
            {
                matrix[i][right] = num;
                num++;
            }
            right--;
            
            //right-left
            if(top<=bottom)
            {
                for(int i = right; i>= left; i--)
                {
                    matrix[bottom][i] = num;
                    num++;
                }
                bottom--;
            }
            
            //bottom-top
            if(left <= right){
                for(int i = bottom; i>= top; i--)
                {
                    matrix[i][left] = num;
                    num++;
                }
                left++;
            }
        }
        
        return matrix;
        
    }
};