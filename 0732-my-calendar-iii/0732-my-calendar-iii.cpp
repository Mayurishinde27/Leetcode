class MyCalendarThree {
public:
    map<int,int> m;
    int maxi = 0;
    MyCalendarThree() {
        
    }
    int book(int start, int end)
    {
        m[start]++;
        m[end]--;
        int count = 0;
        
        for(auto x:m)
        {
            count += x.second;
            maxi = max(count,maxi);
            
        }
        return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */