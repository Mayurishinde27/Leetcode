class MyCalendar {
public:
    vector<pair<int,int>> p;
    
    MyCalendar(){
    }
    
    bool book(int start, int end)
    {
        int n = p.size();
        
        for(int i = 0; i<n; i++)
        {
            if(p[i].second <= start || p[i].first >= end )
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        p.push_back({start,end});
        return true;

        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */