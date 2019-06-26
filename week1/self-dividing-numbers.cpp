class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;  
        bool is_self_dividing;
        int count, digit;
        //use mod and divide next time
        for (int i = left; i <= right; ++i) {
            count = 0;
            digit = i % 10;
            is_self_dividing = true;
            while (i > pow(10, count)) {
                if (digit == 0 || i % digit != 0) {
                    is_self_dividing = false;
                    break;
                }
                count++;
                digit = i/(pow(10, count));
                digit %= 10;
            }
            if (is_self_dividing) {
                result.push_back(i);
            }
        }
        return result;
    }
};

