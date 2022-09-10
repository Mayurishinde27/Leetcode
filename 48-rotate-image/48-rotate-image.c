

void rotate(int** matrix, int matrixSize, int* matrixColSize)
{
    int maxr = matrixSize - 1;
    int maxc = *matrixColSize - 1;
    int i,j;
    
    //by diagonaly rotation 
    for(i=0; i<=maxr; i++)
    {
        for(j=i+1; j<=maxc; j++)
        {
            int temp;
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //by sidewise rotation
    for(i=0; i<=maxr; i++)
    {
        for(j=0; j<=maxc/2; j++)
        {
            int temp;
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][maxc-j];
            matrix[i][maxc-j] = temp;
        }
    }

}