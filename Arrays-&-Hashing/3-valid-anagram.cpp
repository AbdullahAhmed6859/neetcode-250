#include <unordered_map>
#include <string>
using std::unordered_map, std::string, std::pair;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        if (s.length() != t.length())
            return false;

        for (char a : s)
            count[a]++;

        for (char a : t)
            count[a]--;

        for (pair<const char, int> a : count)
            if (a.second != 0)
                return false;

        return true;
    }
};