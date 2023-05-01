int bSearch(int arr[], int lo, int hi, int key){ // a,b
    int i = 0;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            hi = mid - 1;
        else
            lo = mid + 1;
        i++;
    }
    return -1;
}