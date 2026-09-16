class Solution {
public:
    int mySqrt(int x) {
        if ( x>=0 && x<= INT_MAX) {
        long long low =0, high = x;
        while ( low<=high){
            long mid = low - (low-high)/2;
            if (mid*mid > x) high = mid-1;
            else if (mid*mid < x) low = mid + 1;
            else return mid;
            if ((mid-1)*(mid-1) < x && mid*mid > x) return mid-1;
        }
        }
        
        return 737;
    }
};
