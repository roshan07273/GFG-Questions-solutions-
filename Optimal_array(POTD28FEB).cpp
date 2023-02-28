//PROBLEM_LINK--> https://practice.geeksforgeeks.org/problems/d4aeef538e6dd3280dda5f8ed7964727fdc7075f/1

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int>ans;
        ans.push_back(0);
        for(int i =1;i<n;i++){
            int new_ans = ans[i-1]+(a[i]-a[i/2]);
            ans.push_back(new_ans);
        }
        return ans;
        }
};
