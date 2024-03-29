class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        for (int i = 0; i <= s.length(); ++i) {
            if (s[i] == ' ' || i == s.length()) {
                right = i-1;
                while (left < right) {
                    swap(s[left], s[right]);
                    ++left;
                    --right;
                }
                left = i + 1;
            }
        }
        return s;
    }
    
    void swap(char &a, char &b) {
        char tmp = a;
        a = b;
        b = tmp;
    }
};