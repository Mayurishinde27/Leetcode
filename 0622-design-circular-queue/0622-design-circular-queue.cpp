class MyCircularQueue {
    vector<int>data;
    int start;
    int end;
    
public:
    int queue_size;
    int count;

    MyCircularQueue(int k) {
        start=0;
        end=0;
        count=0;
        queue_size=k;
        data.resize(k);
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==queue_size;
    }
    
    bool enQueue(int value) {
        if(!isFull()) {
            count++;
            if(end==queue_size) {
                end=0;
            }
            data[end]=value;
            end++;   
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(!isEmpty()) {
            count--;
            if(start==queue_size) {
                start=0;
            }
            start++; 
            return true;
        }
        return false;
    }
    
    int Front() {
        if(not isEmpty()) {
            if(start==queue_size)
            { 
                start=0;
            }
            return data[start];
        }
        return -1;
    }
    
    int Rear() {
        if(not isEmpty()) {
            if(end==0)
            {
                end=1;
            }
            return data[end-1];
        }
        return -1;
    }
};