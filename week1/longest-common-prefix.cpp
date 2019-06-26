class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int index = 0;
        string prefix = "";
        if (strs.size() == 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        while (true) {
            for (int j = 0; j < strs.size() - 1; ++j) {
                if (strs[j].length() <= index) {
                   return prefix;
                }
                else if (strs[j][index] != strs[j + 1][index]) {
                    return prefix;
                }  
            }
             prefix += strs[0][index];
             index++;
        }
        return prefix;
    }
};