class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	long long int fst_max = LONG_MIN;
    	long long int scnd_max = LONG_MIN;
    	long long int third_max = LONG_MIN;
    	
    	
    	long long int fst_min = LONG_MAX;
    	long long int scnd_min = LONG_MAX;
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]>=fst_max)
    	    {
    	        third_max = scnd_max;
    	        scnd_max = fst_max;
    	        fst_max = arr[i];
    	    }
    	    else if(arr[i]>=scnd_max)
    	    {
    	        third_max = scnd_max;
    	        scnd_max = arr[i];
    	    }
    	    else if(arr[i]>=third_max)
    	    {
    	        third_max = arr[i];
    	    }
    	   if(arr[i] <= fst_min)
    	   {
    	        scnd_min = fst_min;
    	        fst_min = arr[i];
    	    }
    	    else if(arr[i]<=scnd_min){
    	        scnd_min = arr[i];
    	    }
    	}
    	return max(fst_max*scnd_max*third_max , fst_min*scnd_min*fst_max);
    }
};
