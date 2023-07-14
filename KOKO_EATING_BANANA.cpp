class Solution {
public: 
    int findmaxi(vector<int>&piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i = 0 ; i < n ; i++){
            maxi = max(piles[i] , maxi);
        }
        return maxi;
    }
public:
    int counthours(vector<int>&piles , int hours){
        int  totalhours = 0;
        int n = piles.size();
        for(int i = 0 ; i < n ; i++){
            totalhours += ceil((double)piles[i] / (double)hours);
        }
        return totalhours;
    }
public:
    int Solve(int N, vector<int>& piles, int H) {
        int low = 1;
        int high = findmaxi(piles);
        while(low <= high){
            int mid = (low + high) >> 1;
            int total = counthours(piles , mid);
            if(total <= H){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
