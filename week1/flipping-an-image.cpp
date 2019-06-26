class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[i].size()/2; ++j) {
                swap_and_flip(A[i][j], A[i][A.size() - 1 - j]);         
            }
            if (A[i].size() % 2 == 1) {
                A[i][A[i].size()/2] = flip(A[i][A[i].size()/2]); 
            }
        }
        return A;
    }
    
    void swap_and_flip(int &a, int &b) {
        int tmp = a;
        a = flip(b);
        b = flip(tmp);
    }
    
    int flip(int a) {
        return 1 - a;
    }
};