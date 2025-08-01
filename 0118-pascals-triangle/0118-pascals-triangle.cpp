class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascal;
        pascal.push_back({1});
        if(n == 1) return pascal;
        pascal.push_back({1,1});
        if(n==2)return pascal;

        for(int i = 2;i<n;i++){
            vector<int> temp(i+1,1);
            for(int j =1;j<i;j++){
                temp[j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
            pascal.push_back(temp);
        }
        return pascal;
    }
};