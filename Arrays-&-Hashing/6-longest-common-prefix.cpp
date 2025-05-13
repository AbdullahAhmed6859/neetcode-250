#include <string>
#include <vector>
using std::string, std::vector, std::min;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        if (strs.size() == 1)
            return strs[0];

        string prefix = strs[0];
        int i = 0;
        for (int i = 1; i < strs.size(); i++) {
            string str = strs[i];
            string newPrefix = "";
            for (int j = 0; j < min(str.length(), prefix.length()); j++) {
                if (str[j] == prefix[j]) {
                    newPrefix += str[j];
                } else {
                    break;
                }
            }
            if (prefix == "")
                return "";
            prefix = newPrefix;
        }
        return prefix;
    }
};