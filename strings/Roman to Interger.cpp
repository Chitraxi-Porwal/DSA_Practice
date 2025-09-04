#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            int current = values[s[i]];
            int next = (i + 1 < s.length()) ? values[s[i + 1]] : 0;

            if (current < next) {
                total -= current; // subtract if smaller than next
            } else {
                total += current; // otherwise add
            }
        }
        return total;
    }
};

int main() {
    Solution sol;

    cout << sol.romanToInt("III") << endl;      // 3
    cout << sol.romanToInt("LVIII") << endl;    // 58
    cout << sol.romanToInt("MCMXCIV") << endl;  // 1994

    return 0;
}
