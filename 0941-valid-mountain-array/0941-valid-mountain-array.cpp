class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() < 3) return false;
        int incr = 0;
        int decr = 0;
        
        for(int i = 0; i<arr.size()-1; i++)
        {
            if(arr[i] < arr[i+1]){
                if(decr == 0) incr = 1;
                else return false;
            }
            else if(arr[i] > arr[i+1]){
                if(incr) decr = 1;
                else return false;
            }
            else if(arr[i] == arr[i+1]){
                return false;
            }
        }
        
        return incr&&decr;
    }
};