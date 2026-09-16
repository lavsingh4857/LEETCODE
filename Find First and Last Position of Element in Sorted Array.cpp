class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
         int n=  arr.size();
         vector<int> ans(2,-1);
        int low =0,  high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target > arr[mid]) low = mid+1;
            else if (target < arr[mid]) high = mid-1;
            else {
                ans[0] = mid;
                high = mid-1;
            }
        }
        low = 0, high  = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target > arr[mid]) low = mid+1;
            else if (target < arr[mid]) high = mid-1;
            else {
                ans[1] = mid;
               low = mid+1;
            }
        }
        return ans;
    }
};
