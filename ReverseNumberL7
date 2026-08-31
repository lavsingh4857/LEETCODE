class Solution {
public:
    int reverse(int x) {
        long rev =0, r;
        while (x!=0){
            r = x%10;
          // check if the rev variable is greater/less than the range of int or not 
            if (rev > (INT_MAX-r)/10|| rev < (INT_MIN -r)/10) return  0;
            rev = rev*10 + r;
            x = x/10;
        }
        return rev;
    }
};
