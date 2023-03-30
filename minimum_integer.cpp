class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum = 0;
        for(int i = 0 ; i < N ; i++){
            sum+=A[i];
        }
        long long ans = INT_MAX;
        for(int i = 0 ; i < N ; i++){
            long long x = A[i];
            if(sum <= N*x){
                ans = min(ans , x);
            }
            
        }return ans;
    }
};
