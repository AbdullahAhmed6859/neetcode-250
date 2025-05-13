#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using std::unordered_map, std::string, std::pair, std::vector;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anags;
        vector<vector<string>> output;

        for (const string str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anags[sortedStr].push_back(str);
        }

        for (pair<const string, vector<string>>& keyVal : anags) {
            output.push_back(keyVal.second);
        }
        return output;
    }
};