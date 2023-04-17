class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int , int > , int >> q;
        int vis[n][m];
        int cntfresh = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 2){
                    q.push({{i , j } , 0});
                    vis[i][j] = 2;
                }
                else
                {
                    vis[i][j] = 0;
                }
                if(grid[i][j] == 1) cntfresh++;
            }
        }
        
        int tm = 0;
        int drow[] = { -1 , 0 , 1 , 0 };
        int dcol[] = { 0 , 1 , 0 , -1 };
        int cnt = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm , t);
            q.pop();
            
            for(int i = 0 ; i < 4 ; i++){
                int nebrow = r + drow[i];
                int nebcol = c + dcol[i];
                
                if(nebrow >= 0 && nebrow < n && nebcol >= 0 && nebcol < m
                  && vis[nebrow][nebcol] == 0 && grid[nebrow][nebcol] == 1)
                  {
                      q.push({{nebrow , nebcol} , t + 1});
                      vis[nebrow][nebcol] = 2;
                      cnt++;
                  }
            }
        }
       if(cnt != cntfresh) return -1;
       
       return tm;
    }
};
