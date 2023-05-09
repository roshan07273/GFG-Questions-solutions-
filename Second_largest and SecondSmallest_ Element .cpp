int secondLargest(vector<int> &a , int n ){
    int largest = a[0];
    int secLargest = -1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] > largest){
            secLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secLargest && a[i] < largest){
            secLargest = a[i];
        }
    }
    return secLargest;
}
int secondSmallest(vector<int> &a , int n){
    int smallest = a[0];
    int secondSmallest = INT_MAX;

    for(int i = 1 ; i < n ; i++){
        if(a[i] < smallest){
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < secondSmallest){
            secondSmallest =a[i];
        }
    }
    return secondSmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(a , n);
    int secLargest = secondSmallest(a , n);
    return {sLargest , secLargest};
}
