class SmallestInfiniteSet {
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> v;
public:
    SmallestInfiniteSet()
    {
        for(int i = 1; i<=10000; i++)
        {
            pq.push(i);
            v.push_back(1);
        }
    }
    
    int popSmallest() {
        int a = pq.top();
        pq.pop();
        v[a]--;
        return a;
    }
    
    void addBack(int num) {
        if(v[num] > 0)
        {
            return;
        }
        v[num]++;
        pq.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */