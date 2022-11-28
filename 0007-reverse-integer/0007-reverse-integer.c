

int reverse(int x)
{
    int i;
    long long int j=0;
    while(x!=0)
    {    
       
            i=x%10;
            j=j*10+i;
            x=x/10;
            if(j>=pow(2,31) || j<=pow(-2,31))
            {
            return 0;
            
            }
    }

    return j;

}