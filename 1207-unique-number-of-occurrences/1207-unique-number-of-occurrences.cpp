class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x:arr){
            mp[x]++;
        }
        
        if(mp.size()<=1) return true;
        vector<int> check ={0};
        check.resize(arr.size());
        
        for(auto x: mp){
            if(check[x.second] == 1) return false;
            else{
                check[x.second] = 1;
            }
        }
        return true;
    }
};