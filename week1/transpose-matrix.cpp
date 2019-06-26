class Solution {
public:  
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result(A[0].size());
        for (int row = 0; row < A.size(); ++row) {
            for (int col = 0; col < A[row].size(); ++col) {
                result[col].push_back(A[row][col]);
            }
        }
        return result;
    }
    
};