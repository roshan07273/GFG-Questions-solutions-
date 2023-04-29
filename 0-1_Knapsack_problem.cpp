class Solution
{
    public:
    //ANSWER 1
    int fun(int ind , int W , int wt[] , int val[],vector<vector<int>>&dp){
        if(ind == 0){
            if(wt[0] <= W) return val[0];
            else return 0;
        }
        if(dp[ind][W] !=  -1 ) return dp[ind][W];
        int notpick = 0 + fun(ind-1 , W , wt , val , dp);
        int take = -1e9;
        if(wt[ind] <= W) take = val[ind] + fun(ind-1 , W-wt[ind] , wt , val , dp);
        
        return dp[ind][W] = max(notpick , take);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n , vector<int>(W+1 , 0));
       // ASWER 1 return fun(n-1, W , wt , val , dp);
       
       //ANSWER 2
       for(int weight = wt[0] ; weight <= W ; weight++) dp[0][weight] = val[0];
       
       for(int ind = 1 ; ind < n ; ind++){
           for(int weight = 0 ; weight <= W ; weight++){
            int notpick = 0 + dp[ind-1][weight];
            int take = -1e9;
            if(wt[ind] <= weight) take =  val[ind] + dp[ind-1][weight-wt[ind]];
            
            dp[ind][weight] = max(notpick , take);
               
           }
       }
       return dp[n-1][W];
    }
};
