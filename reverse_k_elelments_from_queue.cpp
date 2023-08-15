// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    queue<int> ans;
    stack<int> st;
    while(k--){
        st.push(q.front()); 
        q.pop();
    }
    while(!st.empty()){
        ans.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    return ans;
}
