class Solution {
public:
    bool isPalindrome(int x) {
        long long temp = x;
        bool flag = false;
        long r, rev =0;
        if(x<0) return false;
        else if (x==0) return true;
        while (x>0){
            r = x%10;
            
            if (rev > INT_MAX || rev < INT_MIN) return false;
            rev = rev*10 + r;
            x = x/10;
        }
        if (temp == rev) 
        {
            flag = true;
        }
        return flag;
    }
};
