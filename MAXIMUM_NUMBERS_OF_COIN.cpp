class Solution{
    public:
    
        int func(int i ,int j ,vector <int> &a,  vector<vector<int>>&dp)
        {
            if(i>j)return 0;
            if(dp[i][j] != -1) return dp[i][j];
            int maxi = INT_MIN;
            
            for(int ind = i; ind <= j; ind++)
            {
                int cost = a[i-1] * a[ind] * a[j+1] + func(i, ind-1, a , dp) + func(ind+1, j, a ,dp );
                maxi = max(maxi,cost);
            }
            return  dp[i][j] = maxi;
        }
        int maxCoins(int N, vector <int> &a)
        {
            a.push_back(1);
            a.insert(a.begin(), 1);
            
            vector<vector<int>>dp(N+1 , vector<int>(N+1, -1));
            return func(1 , N , a , dp);
        }
};
