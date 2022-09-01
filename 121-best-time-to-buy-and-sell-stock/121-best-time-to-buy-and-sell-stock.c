int min(int a, int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int maxProfit(int* prices, int pricesSize)
{
    int i,max_profit=0,minimum=10000;
    for(i=0; i<pricesSize; i++)
    {
        minimum= min(minimum,prices[i]);
        max_profit = max(max_profit,prices[i]-minimum);
    }
    return max_profit;
    

}