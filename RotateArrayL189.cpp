class Solution {
public:
     void reverse(vector<int> &v,int i, int j){
        for(; i<j; i++, j--){
            swap(v[i], v[j]);
        }
    }

    void rotate(vector<int>&v, int k){
        k = k%v.size();
        reverse(v,0,v.size()-1);
        reverse(v,0,k-1);
        reverse(v,k,v.size()-1);
    }
};
