
void moveZeroes(int* nums, int numsSize)
{
     int i,j,temp;
    for(i=0; i<numsSize; i++)
    {
        for(j=i+1; j<numsSize; j++)
        {
            if(nums[i]==0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    
   
}


    

