
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   
}

void sortColors(int* nums, int numsSize)
{
    
    int i=0;
    int m=0;
    int j=numsSize-1;
    while(m<=j)
    {
        if(nums[m]==0)
        {
            swap(&nums[m],&nums[i]);
            m++;
            i++;
        }
        else if(nums[m]==1)
        {
            m++;
        }
        else if(nums[m]==2)
        {
             swap(&nums[m],&nums[j]);
             j--;
        }
        
        
        
    }


}