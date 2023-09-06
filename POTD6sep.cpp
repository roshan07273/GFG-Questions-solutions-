class Solution 
{
    private:
    void dfs(int node , vector<int>adj[] , vector<int>&vis){
        vis[node] = true;
        for(auto it : adj[node]){
            if(!vis[it]) dfs(it , adj , vis);
        }
    }
    public:
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    vector<int>vis(V , false);
	    int ans;
	    for(int i = 0 ; i < V ; i++){
	        if(!vis[i]) {
	           dfs(i , adj , vis);
	           ans = i;
	        }
	    }
	    
	    fill(vis.begin() , vis.end() , false);
	    dfs(ans , adj , vis);
	    for(int i = 0 ; i < V ; i++){
	        if(!vis[i]) return -1;
	    }
	    
	    return ans;
	}

};
