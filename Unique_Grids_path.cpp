class Solution
{
    public:
    int funct(int i , int j  , vector<vector<int>>&dp){
        if(i == 0 && j == 0 ) return 1;
        if( i < 0 || j < 0 ) return 0;
        if(dp[i][j] != -1) return dp[i][j];
       int  up = funct(i-1 , j , dp);
       int left = funct(i , j-1 , dp);
        return dp[i][j] = up + left;
    }
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>>dp(a , vector<int>(b , -1));
        return funct(a-1 , b-1 , dp);
    }
};
