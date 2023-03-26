class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>stk; 
        for(auto it: x) {
            if(it=='(' || it=='{' || it == '[') stk.push(it); 
            else {
                if(stk.size() == 0) return false; 
                char ch = stk.top(); 
                stk.pop(); 
                if((it == ')' and ch == '(') or  (it == ']' and ch == '[') or (it == '}' and ch == '{')) continue;
                else return false;
            }
        }
        return stk.empty(); 
    }

};
