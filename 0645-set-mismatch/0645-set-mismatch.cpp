class Solution {
public:
    vector<int> findErrorNums(vector<int>& A)
    {
            unordered_map<int,int> m;
            vector<int> v;
            int store;
            for(auto x: A)
            {
                m[x]++;
            }
            for(auto x:m)
            {
                if(x.second>1)
                {
                    v.push_back(x.first);
                   // store = x.first;
                }
            }


            int sum = 0;
            int maxi = INT_MIN;
            for(int i = 0; i<A.size(); i++)
            {
                //maxi = max(A[i],maxi);
                if(A[i] == v[0])
                {
                    continue;
                }
                else
                {
                    sum += A[i];
                }
            }
            maxi = A.size();
            sum += v[0]; 
            int n = (maxi * (maxi + 1))/2;
            int miss = n - sum;
            v.push_back(miss);

            return v;

    }
};