class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int front = 0;
        int back = A.size() - 1;
        while (front != back) {
            // odd element
            if (A[front] % 2 == 1) {
                swap (A[front], A[back]);
                back--;
            }
            else {
                front++;
                
            }
        }
        return A;
    }
    
    void swap (int &a, int &b) {
        int tmp = a;
        a = b;
        b = tmp;    
    }
};
