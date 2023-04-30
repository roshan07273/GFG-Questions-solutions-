class Solution {
public:
    int fun(int ind , int target , vector<int>&coins , vector<vector<long>>&dp){
        if(ind == 0 ) {
            return (target % coins[0] == 0);
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int nopick = fun(ind - 1 , target , coins , dp);
        int pick = 0;
        if(target >= coins[ind]) pick = fun(ind , target-coins[ind] , coins , dp);
        
        return dp[ind][target] = nopick + pick;
        
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<long>>dp(n , vector<long>(amount+1 , -1));
        return fun(n-1 , amount , coins , dp);
        
    }
};
