class Solution {
public:
    string defangIPaddr(string address)
    {
        int i = 0;
        string s = "";
        while(address[i]!='\0')
        {
            if(address[i] == '.')
            {
                s += '[';
                s += '.';
                s += ']';
            }
            else{
                s += address[i];
            }
            
            i++;
        }
        return s;
    }
};