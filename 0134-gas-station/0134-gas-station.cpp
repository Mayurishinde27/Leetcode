class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {      
        int gas_val = 0;
        int gas_cost = 0;
        
        for(int i = 0; i<gas.size(); i++)
        {
            gas_val += gas[i];
            gas_cost += cost[i];
        }
        
        if(gas_cost > gas_val)
        {
            return -1;
        }
        
        int count = 0;
        int station = 0;
        for(int i = 0; i<gas.size(); i++)
        {   
            station += gas[i] - cost[i];
            
            if(station < 0)
            {
                count = i + 1;
                station = 0;   
            }
        }
        
        return count;
        
    }
};