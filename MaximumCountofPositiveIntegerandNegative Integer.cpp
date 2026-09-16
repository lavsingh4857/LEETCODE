class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n = arr.size();
        int pos=0, neg =0;
        int i=0,j=n-1; 
        while(i<=j){
            if (arr[i]<0) {
                neg++;
                i++;
            }
             else if (arr[j]>0){
                 pos++;
                 j--;
            }
            else  {
                i++, j--;
                continue;
            }
        }
        if (pos >= neg) return pos;
        else return neg;
    }
};
