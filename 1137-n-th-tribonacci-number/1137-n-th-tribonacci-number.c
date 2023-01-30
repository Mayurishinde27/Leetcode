long long int a[38];

int tribonacci(int n)
{
    
    if(n==0)
    {
         return 0;
    }
    if(n==1 || n==2)
    {
        return 1;
    }
    if(a[n]!=0)
    {
        return a[n];
    }
    
    a[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
   

    return a[n];
    


}