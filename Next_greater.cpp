class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>stk;
        vector<long long>ans;
        
        ans.push_back(-1);
        stk.push(arr[n-1]);
         
        for(int i = n-2 ; i >= 0 ; i--)
        {
        while(!stk.empty() && stk.top() <= arr[i])
            stk.pop();
        long long int next = (stk.empty()) ? -1 : stk.top();
    
        ans.push_back(next);
        stk.push(arr[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
