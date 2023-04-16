class MyHashSet {
    unordered_map<int,int> m;
public:
    MyHashSet() {
        
        
    }
   
    void add(int key) {
        m[key]++;
    }
    
    bool contains(int key)
    {
        if(m.find(key) == m.end())
        {
            return false;
        }
        return true;

    }
    
    void remove(int key)
    {
        if(contains(key))
        {
            m.erase(key);
        }
        
    }
    

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */