class Solution {
public:
    string word(string v)
    {
                string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int i = 0;
        string c = "";
        while(v[i] !='\0')
        {
            int idx = v[i]-'a';
            c += arr[idx]; 
            i++;
        }
        return c;
    
    }
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        string str = "";
        vector<string> vec;
        for(int i = 0; i < words.size(); i++)
        {
            str = word(words[i]);
            vec.push_back(str);
        }
        
        int result = 0;
        unordered_map<string,int> m;
        for(auto x:vec)
        {
            m[x]++;
        }
        
        result = m.size();
        return result;
    }
        
};