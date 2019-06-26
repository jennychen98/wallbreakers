class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {    
            while (!is_vowel(s[left]) && left < right) {
                ++left;
            }
           while (!is_vowel(s[right]) && left < right) {
                 --right;
             }
           swap(s[left], s[right]);   
            ++left;
            --right;
        }
        return s;
    }
    bool is_vowel(char letter) {
        return letter == 'a' || letter == 'A' || letter == 'e' ||
             letter == 'E' || letter == 'i' ||  letter == 'I' || letter == 'o' ||
            letter == 'O' || letter == 'u' || letter == 'U';
    }
    
};