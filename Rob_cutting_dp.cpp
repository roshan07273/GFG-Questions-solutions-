class Solution{
  public:
    int f(int ind , int n , int price[] , vector<vector<int>>&dp){
        if(ind == 0) {
            return n * price[0];
        }
        if(dp[ind][n] != -1) return dp[ind][n];
        int nontake = 0 + f(ind-1 , n , price , dp);
        int take = INT_MIN;
        int rodlength = ind + 1;
        if(n >= rodlength) take = price[ind] + f(ind , n - rodlength , price , dp);
        
        return dp[ind][n] =  max(take , nontake);
    }
  public:
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n , vector<int>(n+1 , -1));
        return f(n-1 , n , price , dp);
    }
};
