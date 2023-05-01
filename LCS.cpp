class Solution
{
    public:
    int fun(int ind1 , int ind2 , string text1 , string text2 , vector<vector<int>>&dp)
    {
        if(ind1 < 0 || ind2 < 0 ) return 0;
        
        if(dp[ind1][ind2] != -1 ) return dp[ind1][ind2];
        
        if(text1[ind1] == text2[ind2]) 
            return  dp[ind1][ind2] = 1 + fun(ind1 - 1 , ind2 - 1 , text1 , text2 , dp);
        
        return dp[ind1][ind2] =  max(fun(ind1 - 1 , ind2 , text1 , text2 , dp) , fun(ind1 , ind2 - 1  , text1 , text2 , dp));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x + 1 , vector<int>(y + 1 , -1));
        return fun(x-1 , y-1  , s1 , s2 , dp);
    }
};
