class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first_cap = is_caps(word[0]);
        
        for (int i = 1; i < word.size(); ++i) {
            if (first_cap) {
                if (i != 1 && is_caps(word[i]) != is_caps(word[i-1])) {
                    return false;
                }
            }
            else {
                if (is_caps(word[i])) {
                    return false;
                }
            }
        }
        return true;
    }
    bool is_caps(char letter) {
        return letter >= 65 && letter <= 90;
    }
};