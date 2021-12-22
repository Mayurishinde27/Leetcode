
## [Spiral Matrix](https://leetcode.com/problems/reverse-string/)

### Problem Statement:
Given an `m x n matrix`, return all elements of the matrix in spiral order.

<img width="314" alt="image" src="https://user-images.githubusercontent.com/85113641/147091646-2bcdb5c5-de08-44df-b8ef-92e485710fb3.png">


---------------------------------------------------------------------------------------------------
### Solution:

```c
 int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
    {
    int *result = (int *)malloc(matrixSize*(*matrixColSize)*sizeof(int));
    int i,j;
    int minr=0,minc=0,idx=0;
    int maxc= *matrixColSize-1,maxr= matrixSize-1;
    while(minr <= maxc && minc <= maxr)
    {
        for(i=minr; i<=maxc; i++) //left to right
        {
             result[idx++] = matrix[minc][i];
        }
           
        for(i=minc+1; i<=maxr; i++) //up to down
        {
            result[idx++] = matrix[i][maxc]; 
        }
        for(i=maxc-1; i>minr && minc != maxr; i--) //right to left
        {
            result[idx++] = matrix[maxr][i];
        }
        for(i=maxr; i>minc && minr != maxc; i--) //down to up
        {
            result[idx++] = matrix[i][minr];
        }
        minc++; maxr--; minr++; maxc--;
    }
    *returnSize = idx;
    return result;
}

```


-------------------------------------------------------------------------------------------------------------------------------------


<img width="2452" alt="image" src="https://user-images.githubusercontent.com/85113641/147090082-9a1c53b4-c476-4b35-a63e-75917b8d1300.png">
