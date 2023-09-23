class Solution {
public:
    string intToRoman(int num)
    {
        string str = "";
        map<int,string,greater<int>> mp;
        
        mp[1000] = "M";
        mp[900] = "CM";
        mp[500] = "D";
        mp[400] = "CD";
        mp[100] = "C";
        mp[90] = "XC";
        mp[50] = "L";
        mp[40] = "XL";
        mp[10] = "X";
        mp[9] = "IX";
        mp[5] = "V";
        mp[4] = "IV";
        mp[1] = "I";
        
        // mp['I'] = 1;
        // mp['IV'] = 4;
        // mp['V'] = 5;
        // mp['VI'] = 6;
        // mp['IX'] = 9;
        // mp['X'] = 10;
        // mp['XL'] = 40;
        // mp['L'] = 50;
        // mp['XC'] = 90;
        // mp['C'] = 100;
        // mp['CD'] = 400;
        // mp['D'] = 500;
        // mp['CM'] = 900;
        // mp['M'] = 1000;
        
        for(auto x: mp)
        {
            while(num >= x.first){
                str += x.second;
                num -= x.first;
            }
        }
        return str;
    }
};