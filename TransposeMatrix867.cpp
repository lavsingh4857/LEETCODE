class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>&arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector <vector<int>> v(n, vector<int>(m));
        if (m >=1 && n <=1000 && 1<= (m*n) && (m*n)<=pow(10,5)){
            for (int i =0; i<m; i++){
                for (int j =0; j<n; j++){
                    v[j][i] = arr[i][j];
                }
            }
        }
        return v;
    }
};
