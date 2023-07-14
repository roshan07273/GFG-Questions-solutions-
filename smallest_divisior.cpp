class Solution {
public:
    int maxi(vector<int>&nums){
        int n = nums.size();
        int maxi = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi , nums[i]);
        }
        return maxi;
    }
public:
    int SumOfDivision(vector<int>&nums , int div){
        int sum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum += ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        long long high = maxi(nums);
        while(low <= high){
            long long  mid = (low + high) >> 1;
            if(SumOfDivision(nums , mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
