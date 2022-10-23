class Solution {
    
    public int finalValueAfterOperations(String[] operations)
    {
        int z = 0;
        
        for(int i = 0; i<operations.length; i++)
        {
            if(operations[i].contains("+"))
            {
                z++;
            }
            if(operations[i].contains("-"))
            {
                z--;
            }

            
        }
        
        return z;        
        
    }
    


    
}