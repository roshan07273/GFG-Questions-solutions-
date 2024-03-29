//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
public:
    int minJumps(int arr[], int n) {
    if (n == 0 || arr[0] == 0) return -1;

    if (n == 1) return 0;

        int jumps = 1;
        int currentFarthest = arr[0];
        int nextFarthest = arr[0];

        for (int i = 1; i < n; ++i) {
            if (i > currentFarthest) {
                if (currentFarthest == nextFarthest) return -1; 
                currentFarthest = nextFarthest;
                jumps++;
            }
            nextFarthest = max(nextFarthest, i + arr[i]);
        }

        return jumps;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
