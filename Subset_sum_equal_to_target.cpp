class Solution{   
public:
    bool fun(int ind , int target , vector<int>&arr , vector<vector<int>>&dp){
        if(target == 0) 
           return true;
           
        if(ind == 0) 
            return (arr[0] == target);
        
        if(dp[ind][target] != -1) return dp[ind][target];
        bool notpick = fun(ind-1 , target , arr , dp);
        bool pick = false;
        if(target >= arr[ind]) pick = fun(ind-1 , target - arr[ind] , arr ,  dp);
        
        return  dp[ind][target] = notpick | pick;
    }
public:
    bool isSubsetSum(vector<int> arr, int sum){
       int n = arr.size();
       vector<vector<int>>dp(n , vector<int>(sum+1 , -1));
       return fun(n-1 , sum  , arr , dp); 
    }
};
