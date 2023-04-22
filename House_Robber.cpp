int FindMaxSum(int arr[], int n)
    {
    int prev = arr[0];
    int prev2 = 0;
    
    for(int i = 1 ; i < n ; i++){
        int take = arr[i];
        if(i > 1) take += prev2;
        
        int notake = 0 + prev;
        int curi = max(take , notake);
        prev2 = prev;
        prev = curi;
    }
        return prev;
    }
