class Solution
{
public:
    void function(int index , int sum , vector<int> &arr ,int N ,  vector<int> &SumSubset){
        
        if(index == N){
        SumSubset.push_back(sum);
        return;
    }
        function(index+1 , sum+arr[index] , arr , N , SumSubset);
        
        function(index+1 , sum , arr , N , SumSubset);
        
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>SumSubset;
        function(0, 0 , arr , N ,  SumSubset);
        sort(SumSubset.begin() , SumSubset.end());
        
        return SumSubset;
        
    }
};
