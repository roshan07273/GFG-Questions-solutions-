Longest Sub-Array with Sum K - 
  class Solution {
   public:
    int lenOfLongSubarr(int A[],  int N, int K) {
        map<long long,int>mp;
        int presum = 0;
        int maxlen = 0;
        
        for(int i=0; i<N; i++){
            presum+=A[i];
            if(presum == K){
                maxlen = max(maxlen,i+1);
                
            }
             int rem = presum-K;
            if(mp.find(rem) != mp.end()){
                int len = i-mp[rem];
                maxlen = max(maxlen,len);
            }
            if(mp.find(presum) == mp.end())
            mp[presum] = i;
        }
        return maxlen;
    }
  };
