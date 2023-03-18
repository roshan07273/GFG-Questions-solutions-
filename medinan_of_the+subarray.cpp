class Solution {
  public:
  long long int solve(int N , vector<int>&A , int M){
      
      vector<int> mp(2*N+1,0);
      long long int curr = N;
      long long int total = 0;
      long long int ans = 0;
      mp[curr]++;
      
      for(int i = 0; i < N ; i++){
          if(A[i] >= M){
              total += mp[curr];
              curr += 1;
          }else{
              total -= mp[curr-1];
              curr -= 1;
          }
          ans += total;
          mp[curr]++;
      }
      return ans;
      
  }
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
         return solve(N,A,M) - solve(N,A,M+1);
    }
};
