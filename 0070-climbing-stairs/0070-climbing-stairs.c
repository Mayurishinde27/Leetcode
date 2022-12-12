

long long int a[46];
int climbStairs(int n){
    if(n<=3)
    {
        return n;
    }
    if(a[n]!=0)
    {
        return a[n];
    }
    
    a[n]=climbStairs(n-1)+climbStairs(n-2);

    return a[n];

}