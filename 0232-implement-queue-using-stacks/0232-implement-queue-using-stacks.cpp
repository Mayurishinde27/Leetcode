
class MyQueue {
stack<int> st;
public:
	MyQueue() {

	}

	void push(int x)
    {
		if (st.empty()) {  
			st.push(x);
			return;
		}
        //reccursive call
		int temp = st.top();
		st.pop(); 
		push(x); 
		st.push(temp);
	}

	int pop()
    {
         int n = st.top();
         st.pop();
		 return n;
	}

	int peek()
    {
		return st.top();
	}

	bool empty()
    {
		return st.empty();
	}
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */