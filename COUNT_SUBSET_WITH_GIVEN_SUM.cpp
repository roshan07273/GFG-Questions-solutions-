class Solution{    
public:
    // ANSWER 1
    int fun(int ind , int sum , int ar[] , vector<vector<int>>&dp){
         
         if(ind == 0 ) {
             if(sum == 0 && ar[0] == 0) return 2;
             if(sum == 0 || ar[0] == sum) return 1;
             return 0;
         }
         
         if(dp[ind][sum] != -1) return dp[ind][sum];
         
         int notake  = fun(ind-1 , sum , ar , dp);
         int take = 0;
         if(ar[ind] <= sum) take = fun(ind-1 , sum-ar[ind] , ar , dp);
         
         return dp[ind][sum] = notake + take;
    }

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>>dp(n , vector<int>(sum+1 , -1));
        // ANSWER 1
        return fun(n-1 , sum , arr , dp);
        
        //ANSWER 2
        /*for(int i = 0 ; i < n ; i++) {dp[i][0] = 1;}
        
        if(arr[0] <= sum) dp[0][arr[0]] = 1;
        
        for(int ind = 1 ; ind < n ; ind++){
        for(int s = 0 ; s <= sum ; s++){
        int notake  = dp[ind-1][s];
        int take = 0;
        if(arr[ind] <= sum) take = dp[ind-1][s-arr[ind]];
         
             dp[ind][s] = notake + take;
                
            }
        }
        return dp[n-1][sum];
        */
	}
