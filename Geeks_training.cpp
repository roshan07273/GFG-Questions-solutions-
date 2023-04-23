class Solution {
  private:
    
    int f(int day , int last , vector<vector<int>>& points, vector<vector<int>>&DP)
    {
        if(day == 0){
            int maxi = 0;
            for(int task = 0 ; task < 3 ; task++){
                if(task != last){
                maxi = max(maxi , points[0][task]);
            }
        }
        return DP[day][last] =  maxi;
    }
       if(DP[day][last] != -1) return DP[day][last];
        int maxi = 0;
        for(int task = 0 ; task < 3 ; task++){
            if(task != last){
            int point = points[day][task] + f(day - 1 , task , points , DP);
            maxi = max(maxi , point);
        }
      }
      return DP[day][last] = maxi;
    }
    
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
       
       vector<vector<int>>dp(n , vector<int>(4 , -1));
        return f(n-1 , 3 , points , dp);
    }
};
