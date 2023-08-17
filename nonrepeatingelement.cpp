class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n ; i++) {
        frequencyMap[arr[i]]++;
    }
    for (int i = 0; i < n ; i++) {
        if (frequencyMap[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1;
    }
};
