class MyCalendar {
public:
    map<int,int> m;
    
    MyCalendar(){
    }
    
    bool book(int start, int end)
    {
        m[start]++;
        m[end]--;
        int count = 0;
        
        for(auto x:m)
        {
            count += x.second;
            if(count>1)
            {
                m[start]--;
                m[end]++;
                return false;
            }
        }
        return true;

        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */