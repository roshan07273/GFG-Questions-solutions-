class Solution {
        int mod = (int)(1e9 + 7);
public:
    int fun(int ind , int sum , vector<int>&ar, vector<vector<int>>&dp){
         
         if(ind == 0 ) {
             if(sum == 0 && ar[0] == 0) return 2;
             if(sum == 0 || ar[0] == sum) return 1;
             return 0;
         }
         
         if(dp[ind][sum] != -1) return dp[ind][sum];
         
         int notake  = fun(ind-1 , sum , ar , dp);
         int take = 0;
         if(ar[ind] <= sum) take = fun(ind-1 , sum-ar[ind] , ar , dp);
         
         return dp[ind][sum] = (notake + take) % mod;
    }

public:
    int countPartitions(int n, int d, vector<int>&arr) {
        
    int totSum = 0;
    for(int i=0; i<arr.size();i++){
        totSum += arr[i];
    }
    if(totSum-d<0) return 0;
    if((totSum-d)%2==1) return 0;
    int s2 = (totSum-d)/2;
    vector<vector<int>> dp(n,vector<int>(s2+1,-1));
    return fun(n-1,s2,arr,dp);
   }
};
