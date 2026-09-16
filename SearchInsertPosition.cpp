class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int low = 0, high = n-1;
        while (low<=high) {
            int mid  = (low + high)/2;
        if (target < arr[mid]) high = mid-1;
        else if (target > arr[mid]) low = mid + 1;
        else return mid;
        }
        int i=0;
        while (i<n){
            if ( target > arr[i]) i++;
            else break;
        }
        return i;
  }
};
