class Solution {
public:
    int titleToNumber(string s) {
        int count = 0;
        for (int i = s.length()-1; i >= 0; -- i) {
                count += (s[i] - 'A' + 1) * pow(26, (s.length()- i -1));  
        }
        return count;
    }
    
};