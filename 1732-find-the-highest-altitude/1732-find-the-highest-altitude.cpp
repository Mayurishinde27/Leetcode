class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        int altitude = 0;
        int maxi = 0;
        for(int i = 0; i<gain.size(); i++)
        {
            altitude += gain[i];
            maxi = max(maxi,altitude);
        }
        return maxi;

        
    }
};