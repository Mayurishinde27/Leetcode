class LRUCache {
public:
    class node {
        public:
            int key;
            int val;
            node* next;
            node* prev;
        node(int _key, int _val)
        {
            key = _key;
            val = _val; 
        }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    unordered_map<int, node*>m;
    
    LRUCache(int capacity)
    {
        cap = capacity;    
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node* current) {
        
        node* temp = head->next;
        current -> next = temp;
        current -> prev = head;
        
        head-> next = current;
        temp-> prev = current;
        
    }
    
    void deletenode(node* current) {
        
        node * cur_prev = current -> prev;
        node * cur_next = current->next;
        
        cur_prev -> next = cur_next;
        cur_next -> prev = cur_prev;
    }
    
    int get(int KEY)
    {
        if(m.find(KEY) != m.end())
        {
            node* store = m[KEY];
            int ans = store -> val;
            m.erase(KEY);
            
            deletenode(store);
            addnode(store);
            m[KEY] = head -> next;
            return ans;
        }
        return -1;
    }
    
    void put(int KEY, int value)
    {
        if(m.find(KEY) != m.end())
        {
            node* prev = m[KEY];
            m.erase(KEY);
            deletenode(prev);
        }
        
        if(m.size() == cap){
            m.erase(tail -> prev-> key);
            deletenode(tail-> prev);
        }
        
        addnode(new node(KEY,value));
        m[KEY] = head -> next;
        
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */