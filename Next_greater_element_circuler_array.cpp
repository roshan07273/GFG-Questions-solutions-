class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        vector<int> next_greater(N,-1);
        stack<int>stk;
        for(int i = 2*N-1 ; i >=0 ;  i--){
            while(!stk.empty() && stk.top() <= arr[i%N]){
                stk.pop();
        }
            if(i < N){
                if(!stk.empty()) next_greater[i] = stk.top();
            }
            stk.push(arr[i%N]);
        }
        return next_greater;
    }
};
