class Solution {

  public:
    int noConseBits(int n) {
        // code here
        int count = 0;
        for(int i = 31;i>=0;i--){
            int mask = (1 << i);
            
            if(n&mask){
                count++;
                if(count == 3){
                    n = n&(~mask);
                    count = 0;
                }
            }
            else{
                count = 0;
            }
        }
        return n;
    }
};
