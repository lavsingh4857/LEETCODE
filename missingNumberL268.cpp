class Solution {
public:
    int missingNumber(vector<int>&v) {
        int n = v.size();
        vector<bool> flag(n+1,false);
        for(int i=0; i<n; i++){
            flag[v[i]] = true;
        }
        for(int i=0; i<(n+1); i++){
            if(flag[i] == false){
                return i;
            }
        }
        
        return 1;
    }  
};
