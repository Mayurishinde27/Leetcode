class MyLinkedList {
    deque<int> dq;
public:
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index >= 0 && index < dq.size()){
            // return dq[index];
            deque<int> :: iterator it = dq.begin();
            advance(it,index);

            // return dq.set(it);
            int val = *it;
            return val;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        dq.push_front(val);
    }
    
    void addAtTail(int val) {
        dq.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        
        if(index >=0 && index <= dq.size()){
            deque<int> :: iterator it = dq.begin() + index;
            dq.insert(it,val);
        }
        
    }
    
    void deleteAtIndex(int index) {
        if(index >=0 && index < dq.size()){
            deque<int> :: iterator it = dq.begin() + index;
            dq.erase(it);
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */