class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        long long sum = 0;
        sum = accumulate(arr.begin() , arr.end() , sum);
        for(int i = N ; i>=1 ; i--){
            if(sum % i == 0 ) return i;
        }
    }
