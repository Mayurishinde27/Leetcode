class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char,int> m1,m2;
        
        for(auto x:jewels)
        {
            m1[x]++;
        }
        for(auto x:stones)
        {
            m2[x]++;
        }
        int sum=0;
        for(auto x:m2)
        {
            if(m1.find(x.first)!=m1.end())
                sum+=x.second;
        }
        return sum;
        
        

        // int count = 0;
        // int i,j;
        // for(i=0; i<jewels.size(); i++)
        // {
        //     for(j=0; j<stones.size(); j++)
        //     {
        //         if(jewels[i]==stones[j])
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};