class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> s_map;
        for (int i = 0; i < s.length(); ++i) {
            s_map[s[i]] += 1;
        }
        for (int i = 0; i < t.length(); ++i) {
            if (s_map.find(t[i]) == s_map.end()) {
                return false;
            }
            else {
                if (s_map[t[i]] == 1) {
                    s_map.erase(t[i]);
                }
                else {
                    s_map[t[i]] -= 1;
                }
            }
        }
        cout << "not empty";
        return s_map.empty();
    }
};